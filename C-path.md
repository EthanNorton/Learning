# 📘 CS107 Preparation Plan: LeetCode + Systems-Level C

This plan is designed to prepare for **Stanford’s CS107 (Computer Organization and Systems)** through a combination of **LeetCode practice in C** and **systems-level programming**. 

---

## ✅ Why LeetCode Helps for CS107

### What LeetCode *Strengthens*
| Skill Area | Benefit |
|------------|---------|
| **C syntax & logic** | Develop fast and accurate control flow and recursion. |
| **Pointers & arrays** | Build comfort with pointer arithmetic and memory manipulation. |
| **Linked lists & trees** | Reinforce dynamic memory and struct-based design. |
| **Debugging skills** | Spot and fix common C-level logic and pointer bugs. |
| **Problem-solving** | Think clearly about implementation under time pressure. |

---

## ⚠️ What LeetCode *Misses* (CS107 Concepts)

| CS107 Topic | LeetCode Coverage | Why It Matters |
|-------------|-------------------|----------------|
| `malloc` / `free` | ❌ Rare | Manual memory management is core to CS107. |
| Stack vs Heap memory | ❌ Missing | Crucial for understanding memory layout and segfaults. |
| `valgrind`, `gdb` | ❌ Not used | Required for debugging labs and detecting leaks. |
| Bit-level ops | ⚠️ Limited | Bitmasks, shifting, and binary ops are tested on exams. |
| File I/O and system tools | ❌ Not tested | You'll need to use `fopen`, `fread`, pipes, etc. |
| System-level thinking | ❌ Absent | CS107 is about *how* computers run code, not just *what* the code does. |

---

## 🧠 Ideal Study Blend

| Practice Type | Focus | %
|---------------|-------|----|
| **LeetCode (in C)** | Pointers, strings, recursion, arrays | 70% |
| **Hands-on C Projects** | Manual memory, compilation, debugging | 30% |

---

## 🛠️ Supplement LeetCode With:

- CS107 [labs](https://web.stanford.edu/class/cs107/labs/)
- Practice with `gcc`, `makefiles`, `valgrind`, `gdb`
- Build small projects:
  - Stack/queue/linked list (using malloc/free)
  - Custom `strlen`, `strcpy`, `strcmp`
  - Word frequency counter from a file
  - Your own simplified `malloc`

---

## 🧩 Optional Projects

| Project | What You’ll Learn |
|---------|--------------------|
| Build a mini shell | Fork, exec, pointers, buffers |
| Write a memory allocator | Deep malloc/free mastery |
| Create a string lib | C-strings, buffer safety |
| Debugging challenge repo | Use `valgrind`, `gdb` on broken code |

---

## 🔎 Coming Soon: 25–30 Handpicked LeetCode Problems for CS107 Themes

Stay tuned for a curated list that covers:
- Pointer manipulation
- Manual string handling
- Linked structures
- Recursion + memory

---

## 🎓 Final Advice

LeetCode is great for coding fluency — but **CS107 is about mastering the machine.** 
To truly prepare, go *under the hood*:
- Step through code in `gdb`
- Understand how data moves through memory
- Embrace segfaults — they’re teachers in disguise

---
