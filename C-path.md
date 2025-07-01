# 📘 CS107 Preparation Plan: Computer Organization & Systems

This guide is designed to help prepare for **Stanford's CS107 (Computer Organization and Systems)** using a combination of **C programming** and **systems-level understanding**.

## 🎯 Official Course Goals (Stanford CS107)

### Mastery Goals
- Writing C programs with complex use of memory and pointers
- Building an accurate model of the address space of C programs
- Understanding compile/runtime behavior of C programs

### Competency Goals
- Translating C to/from assembly
- Writing programs that respect computer arithmetic limitations
- Identifying bottlenecks and improving runtime performance
- Working effectively in Unix development environment

### Exposure Goals
- Basic computer architecture understanding
- Compiler and disassembler fundamentals
- Assembly semantics and stack layout

## 📚 Required Resources

### Primary Textbook
- Bryant & O'Hallaron. "Computer Systems: A Programmer's Perspective" (3rd Edition)

### Recommended Resources
- "The C Programming Language" by Kernighan & Ritchie (K&R)
- Nick Parlante's Essential C reader
- CS107 Course Reader: https://web.stanford.edu/~cgregg/cgi-bin/107-reader

---

## ✅ Why LeetCode Helps for CS107

### What LeetCode *Strengthens*
| Skill Area | Benefit |
|------------|---------|
| **C syntax & logic** | Practice control flow, recursion, and memory-safe coding. |
| **Pointers & arrays** | Develop fluency in pointer manipulation. |
| **Linked lists & trees** | Reinforce dynamic memory and struct-based design. |
| **Debugging skills** | Encounter and fix common C-level issues. |
| **Problem-solving** | Practice implementing classic algorithms under pressure. |

---

## ⚠️ What LeetCode *Misses* (CS107 Concepts)

| CS107 Topic | LeetCode Coverage | Why It Matters |
|-------------|-------------------|----------------|
| `malloc` / `free` | ❌ Rare | Manual memory management is core to CS107. |
| Stack vs Heap memory | ❌ Missing | Critical for understanding memory layout and segfaults. |
| `valgrind`, `gdb` | ❌ Not used | Essential for debugging in CS107. |
| Bit-level ops | ⚠️ Minimal | CS107 uses bit masking and shifting extensively. |
| File I/O and pipes | ❌ Not covered | You'll work with `fopen`, `fread`, `write`, etc. |
| Systems mindset | ❌ Absent | CS107 teaches *how programs run*, not just *how to solve problems*. |

---

## 🛠️ Development Environment Setup

### Required Tools
- Unix-based environment (Linux/Mac) or SSH access to Stanford's myth machines
- GCC compiler
- GDB debugger
- Valgrind memory checker
- Make build system

## 🧩 Handpicked LeetCode Problems for CS107 Themes

### 🔗 Arrays & Pointers
- [Two Sum](https://leetcode.com/problems/two-sum/)
- [Rotate Array](https://leetcode.com/problems/rotate-array/)
- [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
- [Move Zeroes](https://leetcode.com/problems/move-zeroes/)
- [Reverse String](https://leetcode.com/problems/reverse-string/)

### 🔗 Strings (C-Strings Style)
- [Implement strStr()](https://leetcode.com/problems/implement-strstr/)
- [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
- [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)
- [Length of Last Word](https://leetcode.com/problems/length-of-last-word/)
- [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

### 🔗 Linked Lists
- [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
- [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
- [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)

### 🔗 Recursion & Memory
- [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)
- [Same Tree](https://leetcode.com/problems/same-tree/)
- [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)

### 🔗 Bit Manipulation & Low-Level Logic
- [Single Number](https://leetcode.com/problems/single-number/)
- [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [Reverse Bits](https://leetcode.com/problems/reverse-bits/)
- [Power of Two](https://leetcode.com/problems/power-of-two/)
- [Hamming Distance](https://leetcode.com/problems/hamming-distance/)

## 🧠 Projects Aligned with CS107 Goals

### Memory Management
- Implement your own malloc & free (basic allocator)
- Memory leak detection tools
- Address space visualizer

### Systems Programming
- Build a mini shell (`fork`, `exec`, buffers)
- File I/O operations
- Process management

### Data Structures in C
- Create a C string library (`strlen`, `strcpy`, `strcmp`)
- Implement basic data structures without STL
- Memory-efficient data structure design

### Assembly & Architecture
- Simple assembly programs
- Stack frame visualization
- Calling convention examples

## 📚 Weekly Study Plan

1. **Week 1-2: C Fundamentals**
   - C syntax and basic programs
   - Memory model introduction
   - Pointers and arrays

2. **Week 3-4: Memory Management**
   - Stack vs Heap
   - malloc/free
   - Memory debugging

3. **Week 5-6: Systems Programming**
   - File operations
   - Process management
   - Unix environment

4. **Week 7-8: Architecture**
   - Assembly basics
   - Stack frames
   - Calling conventions

## 🔍 Final Advice

> "CS107 teaches you to think like the machine. You don't just write code—you understand what the code is doing at the instruction and memory level."

- Focus on understanding the machine level
- Practice with debugging tools (gdb, valgrind)
- Build strong foundations in C before moving to higher-level concepts

📁 **Want to go deeper?** Clone [Stanford's CS107 repo](https://github.com/tyleransom/cs107) or [official course site](https://web.stanford.edu/class/cs107/) and try the labs in advance.

