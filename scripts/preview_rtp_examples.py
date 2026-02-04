"""
Preview examples from RTP / RTP-2.0 datasets.

Usage:
  python .\scripts\preview_rtp_examples.py
  python .\scripts\preview_rtp_examples.py --limit 10
  python .\scripts\preview_rtp_examples.py --dataset <hf_id>
  python .\scripts\preview_rtp_examples.py --data-path "C:\path\to\data.jsonl" --format json
"""

from __future__ import annotations

import argparse
from pathlib import Path

from datasets import Dataset, DatasetDict, load_dataset


def _resolve_dataset(args: argparse.Namespace) -> tuple[Dataset | DatasetDict, str]:
    if args.data_path:
        path = Path(args.data_path)
        if not path.exists():
            raise SystemExit(f"Data path not found: {path}")
        dataset = load_dataset(args.format, data_files=str(path))
        source = f"local:{path}"
    else:
        dataset = load_dataset(args.dataset)
        source = f"hf:{args.dataset}"
    return dataset, source


def _pick_split(dataset: Dataset | DatasetDict, split: str | None) -> Dataset:
    if isinstance(dataset, DatasetDict):
        chosen_split = split or next(iter(dataset.keys()))
        return dataset[chosen_split]
    return dataset


def _get_text(value: object) -> str:
    if isinstance(value, dict):
        return str(value.get("text", ""))
    if value is None:
        return ""
    return str(value)


def _get_metric(value: object, key: str) -> str:
    if isinstance(value, dict):
        metric = value.get(key)
        if metric is None:
            return "n/a"
        return f"{metric:.4f}"
    return "n/a"


def main() -> None:
    parser = argparse.ArgumentParser(description="Preview RTP dataset examples.")
    parser.add_argument(
        "--dataset",
        default="allenai/real-toxicity-prompts",
        help="Hugging Face dataset ID to load (default: %(default)s).",
    )
    parser.add_argument(
        "--data-path",
        help="Local dataset file path (json/csv/parquet); overrides --dataset.",
    )
    parser.add_argument(
        "--format",
        default="json",
        choices=["json", "csv", "parquet"],
        help="File format for --data-path (default: %(default)s).",
    )
    parser.add_argument("--split", help="Dataset split to inspect.")
    parser.add_argument(
        "--limit",
        type=int,
        default=5,
        help="Number of examples to print (default: %(default)s).",
    )
    parser.add_argument(
        "--tox-key",
        default="toxicity",
        help="Metric key to show (default: %(default)s).",
    )
    args = parser.parse_args()

    dataset, source = _resolve_dataset(args)
    split_ds = _pick_split(dataset, args.split)

    print(f"Loaded: {source}")
    print(f"Rows: {len(split_ds)}")
    print(f"Columns: {split_ds.column_names}")
    print("-" * 80)

    limit = min(args.limit, len(split_ds))
    for i in range(limit):
        row = split_ds[i]
        prompt = row.get("prompt")
        continuation = row.get("continuation")
        challenging = row.get("challenging", None)

        prompt_text = _get_text(prompt)
        cont_text = _get_text(continuation)
        prompt_tox = _get_metric(prompt, args.tox_key)
        cont_tox = _get_metric(continuation, args.tox_key)

        print(f"Example {i + 1}")
        print(f"Challenging: {challenging}")
        print(f"Prompt {args.tox_key}: {prompt_tox}")
        print(f"Continuation {args.tox_key}: {cont_tox}")
        print("PROMPT:", prompt_text[:400])
        print("CONTINUATION:", cont_text[:400])
        print("-" * 80)


if __name__ == "__main__":
    main()
