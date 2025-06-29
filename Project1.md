# 🚀 CUDA-Accelerated Pairwise Sequence Aligner

## Overview

This project implements a **Smith–Waterman local sequence alignment algorithm** in **CUDA**, with a **C++ host**. It is inspired by [MSCS-Alignment](https://github.com/EthanNorton/MSCS-Alignment) and aims to demonstrate how modern **C++ fundamentals** can transfer directly to **GPU computing**.

The goal is to build a GPU-accelerated version of pairwise sequence alignment for bioinformatics applications using CUDA kernels and wavefront-style parallelism.

---

## 🎯 Objectives

- ✅ Implement Smith–Waterman algorithm in C++ as a reference
- ✅ Write a CUDA kernel to compute the alignment matrix
- ✅ Transfer data between CPU and GPU using `cudaMemcpy`
- ✅ Apply performance optimization strategies (shared memory, coalescing)
- ✅ Benchmark performance vs. CPU-only implementation
- 🔄 (Optional) Add GPU backtracking & batch processing

---

## 🧠 Key Skills Practiced

| Area         | Concepts |
|--------------|----------|
| **C++**      | Dynamic memory, pointers, structs, 2D arrays, algorithmic design |
| **CUDA**     | Kernel launch, thread/block indexing, memory transfers (`cudaMalloc`, `cudaMemcpy`), shared memory |
| **Parallelism** | Wavefront (anti-diagonal) parallelism in DP |
| **Bioinformatics** | Local alignment, scoring systems, sequence manipulation |

---

## 📦 Project Structure

```plaintext
cuda-aligner/
├── include/
│   └── align.hpp            # Host-side C++ headers
├── src/
│   ├── align_cpu.cpp        # Pure C++ implementation
│   ├── align_cuda.cu        # CUDA kernel implementation
│   └── main.cpp             # Driver to test CPU vs GPU
├── data/
│   └── test_sequences.txt   # Sample input
├── CMakeLists.txt
└── README.md
