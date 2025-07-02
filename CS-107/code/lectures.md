- Lecture 1:

# 🧠 CS107 Lecture 2 Study Guide – Memory, Stack, Heap, and Pointers

This guide is based on [CS107 Lecture 2 (Spring 2025)](https://web.stanford.edu/class/archive/cs/cs107/cs107.1258/lectures/2/Lecture2.pdf) and is intended to help reinforce systems-level thinking in C.

---

## 🔧 Core Tools & Concepts

| **Concept**           | **Description**                                                                 |
|-----------------------|---------------------------------------------------------------------------------|
| **Memory Segments**   | Understand layout: *code, static/global, stack, heap*                           |
| **Stack vs Heap**     | Differences in allocation, lifetime, performance, and usage                     |
| **Pointers**          | Store memory addresses; dereferencing with `*` and `&`                          |
| **Pointer Arithmetic**| Perform arithmetic and navigate memory via pointer math                        |
| **Activation Records**| Understand how function calls use stack space                                   |
| **Dynamic Allocation**| Use `malloc`, `calloc`, `realloc`, `free` for heap memory management            |
| **Common Pitfalls**   | Avoid uninitialized/dangling pointers, memory leaks                             |

---

## 🧠 Skills to Master

- Visualizing memory with diagrams
- Tracing function calls on the stack
- Allocating and freeing heap memory safely
- Debugging segmentation faults and leaks
- Understanding `sizeof`, padding, and alignment

---

## 🧩 Practice Problems

### Set 1: Stack, Pointers, and Addresses

- Write a function that swaps two integers using pointers.
- Print addresses and values of:
  - A local variable
  - A function parameter
  - A pointer to a local variable

### Set 2: Heap Allocation with `malloc`

- Implement a dynamic array with:
  - `push_back`
  - `resize`
  - `free_array`
- Allocate a `struct` with `malloc` and free it correctly.
- Explore what happens when you don’t `free`.

Example:
```c
int* allocate_and_set(int x) {
    int* p = malloc(sizeof(int));
    *p = x;
    return p;
}
