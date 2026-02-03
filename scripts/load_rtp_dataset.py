"""
Load an LLM evaluation dataset for Month 1 simulations.

Default: allenai/real-toxicity-prompts (RTP original).
To use CMU RTP-2.0, pass a Hugging Face dataset ID with --dataset
or download the files and pass --data-path with --format.
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


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Load an LLM evaluation dataset (RTP/RTP-2.0)."
    )
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
    parser.add_argument(
        "--split",
        help="Dataset split to inspect (default: first available).",
    )
    args = parser.parse_args()

    dataset, source = _resolve_dataset(args)
    split_ds = _pick_split(dataset, args.split)

    print(f"Loaded: {source}")
    print(f"Rows: {len(split_ds)}")
    print(f"Columns: {split_ds.column_names}")
    print("Sample row:")
    print(split_ds[0])


if __name__ == "__main__":
    main()
