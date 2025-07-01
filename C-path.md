# 📘 CS107 Preparation Plan: LeetCode + Systems-Level C

This guide is designed to help prepare for **Stanford’s CS107 (Computer Organization and Systems)** using a combination of **C-based LeetCode practice** and **hands-on systems programming**.

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

## 🛠️ Ideal Study Blend

| Practice Type | Focus | %
|---------------|-------|----|
| **LeetCode (in C)** | Pointers, strings, recursion, arrays | 70% |
| **Hands-on C Projects** | Memory management, compilation, debugging | 30% |

---

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

---

## 🧠 Projects to Supplement LeetCode
- 🔧 **Implement your own malloc & free (basic allocator)**
- 📂 **Build a mini shell** (`fork`, `exec`, buffers)
- 📚 **Create a C string library** (`strlen`, `strcpy`, `strcmp`)
- 📝 **Text file parser** (count word frequency, use `fopen/fread`)
- 📊 **Stack/queue/linked list from scratch** (using `malloc`)

---

## 📚 Recommended C Programming Resources

### 📘 Books
- **[The C Programming Language (K&R)](https://archive.org/details/The_C_Programming_Language_2nd_Edition)** – Classic, terse but complete.
- **C Programming: A Modern Approach (K.N. King)** – Great for beginners, with detailed explanations.
- **21st Century C (O'Reilly)** – More modern C usage.

### 📺 Interactive Courses
- [Harvard CS50: Intro to Computer Science](https://cs50.harvard.edu/x/)
- [Learn-C.org (Free Interactive)](https://www.learn-c.org/)
- [Coursera Accelerated C++ Fundamentals](https://www.coursera.org/learn/cs-fundamentals-1/) – Good C++ transition after CS107

### 🛠 Tools
- **gcc** – Compile with `gcc -Wall -g`
- **valgrind** – Detect memory leaks
- **gdb** – Debug segfaults step-by-step
- **makefiles** – Build multi-file C programs

---

## 🔍 Final Advice

> “CS107 teaches you to think like the machine. You don’t just write code—you understand what the code is doing at the instruction and memory level.”

- Use LeetCode to master *implementation*
- Use `gdb`, `valgrind`, and projects to master *systems fluency*
- Read error messages deeply. Chase bugs. Understand the *why*, not just the *what*

---

📁 **Want to go deeper?** Clone [Stanford’s CS107 repo](https://github.com/tyleransom/cs107) or [official course site](https://web.stanford.edu/class/cs107/) and try the labs in advance.

