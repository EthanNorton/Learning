# 1-Month LeetCode + Project Plan

**Goal:** Daily commits across LeetCode problems and Learning repo projects.  
**Repos:** `Leetcode` (algorithms + CMU MSML) | `Learning` (RTP, Minari, Monte Carlo)

---

## Week 1 — Arrays & Hashing + Probability Foundations

| Day | LeetCode / CMU | Type | Learning Repo |
|-----|----------------|------|---------------|
| 1 | NeetCode: Valid Anagram | Arrays/Hashing | Run `load_rtp_dataset.py`, add brief README note |
| 2 | NeetCode: Group Anagrams (or Product of Array Except Self) | Arrays/Hashing | EDA notebook: add 1 visualization (toxicity histogram) |
| 3 | NeetCode: Top K Frequent Elements | Arrays/Hashing | EDA notebook: bootstrap CIs for mean toxicity |
| 4 | CMU Practice: Problems 9–10 (sigmoid, softmax) | ML Foundations | Update `eda_rtp.ipynb` Monte Carlo section |
| 5 | NeetCode: Encode/Decode Strings (or similar) | Arrays/Hashing | Add `scripts/simulate_sampling.py` for RTP |
| 6 | CMU Practice: Problems 11–12 (BCE, add bias) | ML Foundations | Minari notebook: run full EDA, add 1 plot |
| 7 | NeetCode: Longest Consecutive Sequence | Arrays/Hashing | README: document RTP + Minari setup + run instructions |

---

## Week 2 — Two Pointers, Sliding Window, Stack + Simulation

| Day | LeetCode / CMU | Type | Learning Repo |
|-----|----------------|------|---------------|
| 8 | NeetCode: Container With Most Water | Two Pointers | RTP: compare challenging vs non-challenging toxicity |
| 9 | NeetCode: 3Sum | Two Pointers | Add metric stability plot (sample size vs std) |
| 10 | NeetCode: Subarray Product Less Than K | Sliding Window | `simulate_sampling.py`: add 95% CI output |
| 11 | NeetCode: Min Stack | Stack | Minari: Monte Carlo on mean return |
| 12 | CMU Practice: Problems 13–14 (standardize, Lasso gradient) | ML Foundations | Consolidate RTP scripts into single `run_eda.py` |
| 13 | NeetCode: Evaluate Reverse Polish Notation | Stack | EDA notebook: add precision/recall section (link to eval metrics) |
| 14 | NeetCode: Generate Parentheses | Stack / Backtracking | README: add “How to reproduce” section |

---

## Week 3 — Binary Search, Linked List, Trees + Agent Prep

| Day | LeetCode / CMU | Type | Learning Repo |
|-----|----------------|------|---------------|
| 15 | NeetCode: Search in Rotated Sorted Array | Binary Search | Start RL warmup: `Intro_to_RL_Coding/Level1_Arrays/01_track_and_average.py` |
| 16 | NeetCode: Find Minimum in Rotated Sorted Array | Binary Search | RL: `02_multi_action_tracking.py` |
| 17 | NeetCode: Reorder List | Linked List | RL: `Level2_RL_Basics/01_epsilon_greedy.py` |
| 18 | NeetCode: Remove Nth Node From End | Linked List | Minari: try different dataset (e.g., minigrid), compare returns |
| 19 | NeetCode: Validate BST | Trees | Add `notebooks/eda_minari_compare.ipynb` (2 datasets) |
| 20 | CMU Practice: Problems 15–16 (polynomial, precision/recall/F1) | ML Foundations | Connect `01_evaluation_metrics.py` to RTP toxicity thresholding |
| 21 | NeetCode: Lowest Common Ancestor of BST | Trees | Document: “Evaluation metrics + RTP integration” in Learning README |

---

## Week 4 — DP, Greedy, Integration + Cleanup

| Day | LeetCode / CMU | Type | Learning Repo |
|-----|----------------|------|---------------|
| 22 | NeetCode: House Robber | 1D DP | Refactor RTP notebooks: extract shared helpers to `scripts/` |
| 23 | NeetCode: Coin Change | 1D DP | Add `scripts/bootstrap_ci.py` for reuse |
| 24 | NeetCode: Longest Increasing Subsequence | 1D DP | Integration: RTP + eval metrics + bootstrap in one notebook |
| 25 | NeetCode: Merge Intervals | Greedy | Write `PROJECT_SUMMARY.md` in Learning (what works, how to run) |
| 26 | NeetCode: Jump Game | Greedy | Finalize Monte Carlo notebook with clear narrative |
| 27 | NeetCode: Partition Labels | Greedy | Add unit tests or assertions to key scripts |
| 28 | Review + Buffer | Any backlog | Polish READMEs, fix lints, push both repos |

---

## Problem Types Summary

| Type | Count | Examples |
|------|-------|----------|
| Arrays & Hashing | 7 | Valid Anagram, Group Anagrams, Top K, Longest Consecutive |
| Two Pointers | 2 | Container With Water, 3Sum |
| Sliding Window | 1 | Subarray Product Less Than K |
| Stack | 4 | Min Stack, RPN, Generate Parentheses |
| Binary Search | 2 | Search Rotated, Find Min Rotated |
| Linked List | 2 | Reorder List, Remove Nth Node |
| Trees | 2 | Validate BST, LCA of BST |
| 1D DP | 3 | House Robber, Coin Change, LIS |
| Greedy | 3 | Merge Intervals, Jump Game, Partition Labels |
| CMU Practice | 6 | sigmoid, softmax, BCE, bias, standardize, Lasso, poly, P/R/F1 |

---

## Learning Repo Daily Commit Ideas

- **Scripts:** `load_rtp_dataset.py`, `preview_rtp_examples.py`, `simulate_sampling.py`, `bootstrap_ci.py`
- **Notebooks:** `eda_rtp.ipynb`, `eda_minari.ipynb`, `eda_minari_compare.ipynb`
- **Docs:** README updates, `PROJECT_SUMMARY.md`, run instructions

---

## LeetCode Repo Daily Commit Ideas

- **NeetCode:** One problem per day in `NeetCode_50_Introductions/` (problem.md + solution.py)
- **CMU:** Practice problems 9–16 in `05_Practice_Problems/`
- **Deep-ML:** Evaluation metrics, integration notes

---

## Tips

1. **Commit message pattern:** `Day N: [LeetCode problem] + [Learning change]` or split into two commits.
2. **Buffer day (28):** Use for catch-up, refactoring, or documentation.
3. **If stuck:** Swap a hard problem for an easier one from the same type; keep the commit.
4. **Cross-link:** Reference `01_evaluation_metrics.py` from RTP notebooks when you add thresholding.
