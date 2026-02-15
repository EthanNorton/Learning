# 6-Month Columbia CVN Prep Plan (March - August 2026)

**Goal:** Build systems fundamentals + production ML expertise for Columbia MSCS (CVN)  
**Focus:** Computer systems, distributed systems, deep learning implementation, portfolio projects  
**Time commitment:** ~25-30 hours/week (full-time after quitting in March)

---

## 🎯 Core Objectives

1. **Master computer systems fundamentals** (memory, cache, concurrency)
2. **Understand distributed systems concepts** (scalability, consistency, fault tolerance)
3. **Implement neural networks from scratch** (no black-box libraries)
4. **Build production-quality ML systems projects** (portfolio for interviews)
5. **Minimal LeetCode** (50 Easy problems for basic algorithmic thinking)

---

## 📅 Month-by-Month Breakdown

### **Months 1-2: Systems Fundamentals + Northwestern Finish (March-April)**

**Primary Goal:** Learn how computers actually work + finish Northwestern strong

#### Week 1-2: C Programming Basics + Setup
- **Learning:**
  - Set up dev environment (GCC, GDB, Valgrind, Make)
  - Learn C basics: pointers, arrays, memory allocation
  - Read K&R "The C Programming Language" Ch 1-6
- **Coding:**
  - Day 1-2: Hello World, basic I/O
  - Day 3-5: Pointer exercises, array manipulation
  - Day 6-7: Simple programs (file processing, string manipulation)
- **Northwestern:** 
  - 10 hrs/week on Probability Theory + Intelligent Systems coursework
- **LeetCode:** 
  - 3x/week, 30 min sessions (Easy problems only)
  - Focus: Arrays, strings (12 problems total)

**Daily Commit Pattern:**
```
Day N: [C exercise: pointers/arrays] + [Northwestern: assignment progress]
```

#### Week 3-4: Data Structures in C
- **Project:** Implement core data structures from scratch in C
  - Dynamic array (like Python list)
  - Linked list (singly, doubly)
  - Hash table with chaining
  - Binary search tree
- **Reading:** CS:APP Chapter 3 (Machine-Level Representation)
- **Practice:** Use Valgrind to catch memory leaks
- **Northwestern:** Continue coursework (10 hrs/week)
- **LeetCode:** Hash tables, linked lists (10 problems)

**Repo Structure:**
```
Learning/
├── systems-fundamentals/
│   ├── dynamic-array/
│   │   ├── array.c
│   │   ├── array.h
│   │   └── test_array.c
│   ├── linked-list/
│   ├── hash-table/
│   └── bst/
└── README.md
```

#### Week 5-8: Memory Allocator (Core Project)
- **Project:** Implement malloc() and free()
  - Week 5: Simple first-fit allocator
  - Week 6: Add free list and coalescing
  - Week 7: Optimize with segregated lists
  - Week 8: Performance testing and debugging
- **Reading:** CS:APP Chapter 9 (Virtual Memory) - READ DEEPLY
- **Tools:** Master GDB for debugging, Valgrind for memory analysis
- **Northwestern:** Finish strong! (10 hrs/week)
- **LeetCode:** Binary trees (10 problems)

**Daily Commit Pattern:**
```
Day N: [malloc: implement coalescing] + [tests: edge cases]
```

---

### **Months 3-4: Performance + Distributed Systems (May-June)**

**Primary Goal:** Understand cache optimization + distributed systems concepts

#### Week 9-10: Cache Optimization
- **Project:** Matrix multiplication with cache optimization
  - Naive implementation (baseline)
  - Blocked/tiled implementation
  - Measure speedup with `perf`
  - Compare to NumPy performance
- **Reading:** CS:APP Chapter 6 (Memory Hierarchy) - CRITICAL
- **Tools:** Learn to use `perf`, `cachegrind`
- **LeetCode:** Two pointers (8 problems)

#### Week 11-12: Distributed Systems Theory
- **Reading:** "Designing Data-Intensive Applications" Ch 1-5
  - Reliability, scalability, maintainability
  - Data models and query languages
  - Storage and retrieval
  - Encoding and evolution
  - Replication
- **Practice:** Write summaries of each chapter
- **Side Project:** Implement simple key-value store
- **LeetCode:** Stacks, queues (8 problems)

**Repo Addition:**
```
Learning/
├── distributed-systems/
│   ├── notes/
│   │   ├── chapter-1-reliability.md
│   │   ├── chapter-2-data-models.md
│   │   └── ...
│   └── simple-kv-store/
│       ├── server.c
│       └── client.c
```

#### Week 13-14: Concurrency
- **Project:** Multi-threaded producer-consumer queue
  - Implement with pthreads
  - Use mutexes and condition variables
  - Handle race conditions
  - Stress test with multiple threads
- **Reading:** CS:APP Chapter 12 (Concurrent Programming)
- **Tools:** Helgrind (thread debugger)
- **LeetCode:** Sliding window (6 problems)

#### Week 15-16: Distributed Systems Deep Dive
- **Reading:** "Designing Data-Intensive Applications" Ch 6-9
  - Partitioning
  - Transactions
  - Trouble with distributed systems
  - Consistency and consensus
- **Project:** Add replication to key-value store
- **LeetCode:** Occasional practice (6 problems)

---

### **Months 5-6: Deep Learning + Portfolio Projects (July-August)**

**Primary Goal:** Implement neural networks from scratch + build impressive portfolio

#### Week 17-18: Neural Networks from Scratch
- **Course:** Andrej Karpathy's "Neural Networks: Zero to Hero"
  - Video 1: Micrograd (autograd engine)
  - Video 2: Makemore Part 1 (bigram model)
  - Video 3: Makemore Part 2 (MLP)
  - Video 4: Makemore Part 3 (BatchNorm)
- **Practice:** Implement each video's code yourself
- **Reading:** "Deep Learning" book Ch 6 (Deep Feedforward Networks)
- **No LeetCode:** Focus on implementation

**Repo Addition:**
```
Learning/
├── deep-learning-from-scratch/
│   ├── micrograd/
│   │   ├── engine.py
│   │   └── nn.py
│   ├── makemore/
│   │   ├── bigram.py
│   │   ├── mlp.py
│   │   └── batchnorm.py
│   └── notebooks/
│       └── experiments.ipynb
```

#### Week 19-20: Transformers + Attention
- **Course:** Karpathy's videos on GPT
  - Video 5: Makemore Part 4 (Backprop)
  - Video 6: GPT from scratch
- **Project:** Implement attention mechanism manually
- **Reading:** "Attention Is All You Need" paper
- **Practice:** Train small transformer on text generation

#### Week 21-24: Major Portfolio Project - LLM Evaluation Framework
- **Project:** Build production-quality LLM evaluation system
  - **Week 21:** Core infrastructure
    - Set up project structure
    - Implement prompt testing framework
    - Basic evaluation metrics (consistency, quality)
  - **Week 22:** Advanced features
    - Multiple evaluation strategies (rule-based, model-based, human-in-loop)
    - A/B testing framework for prompts
    - Drift detection for model outputs
  - **Week 23:** Production features
    - PostgreSQL for results storage
    - Streamlit dashboard for visualization
    - Docker containerization
    - CI/CD pipeline
  - **Week 24:** Polish and documentation
    - Comprehensive README
    - API documentation
    - Example notebooks
    - Deploy demo version

**Project Tech Stack:**
```
- Python 3.11+
- OpenAI/Anthropic APIs
- PostgreSQL (results storage)
- pytest (testing)
- Streamlit (dashboard)
- Docker (containerization)
- GitHub Actions (CI/CD)
```

**Repo Structure:**
```
llm-evaluation-framework/
├── src/
│   ├── evaluators/
│   │   ├── consistency.py
│   │   ├── quality.py
│   │   └── drift.py
│   ├── storage/
│   │   └── postgres.py
│   ├── dashboard/
│   │   └── app.py
│   └── api/
│       └── routes.py
├── tests/
├── notebooks/
│   └── examples.ipynb
├── docs/
├── docker-compose.yml
├── requirements.txt
└── README.md
```

---

## 📊 Weekly Schedule Template

### Time Allocation (25-30 hrs/week)

**Monday-Wednesday (10-12 hrs):**
- 3-4 hrs: Primary project work
- 2-3 hrs: Reading (CS:APP or Kleppmann)
- 1-2 hrs: LeetCode (3x/week, 30-45 min each)

**Thursday-Friday (8-10 hrs):**
- 4-5 hrs: Continue project
- 2-3 hrs: Video courses (when applicable)
- 1-2 hrs: Documentation/cleanup

**Saturday-Sunday (7-8 hrs):**
- 3-4 hrs: Weekend project push
- 2-3 hrs: Deep reading or video courses
- 1-2 hrs: Blog posts, papers, or exploration

**Flex time:**
- When stuck: Switch to reading or easier task
- When flowing: Push harder on current task
- Rest when burned out: This is a marathon, not a sprint

---

## 📈 Progress Tracking

### Monthly Milestones

**End of Month 1 (April):**
- ✅ Finished Northwestern MS (3.97+ GPA maintained)
- ✅ Comfortable with C programming
- ✅ Implemented basic data structures in C
- ✅ Started memory allocator project
- ✅ Completed 22 LeetCode Easy problems

**End of Month 2 (May):**
- ✅ Completed memory allocator (malloc/free)
- ✅ Finished CS:APP Ch 3, 6, 9
- ✅ Understand cache optimization
- ✅ Completed 35 LeetCode Easy problems

**End of Month 3 (June):**
- ✅ Built concurrent producer-consumer queue
- ✅ Read "Designing Data-Intensive Applications" Ch 1-9
- ✅ Implemented simple distributed key-value store
- ✅ Completed 43 LeetCode Easy problems

**End of Month 4 (July):**
- ✅ Implemented neural networks from scratch
- ✅ Built autograd engine (micrograd)
- ✅ Completed Karpathy's GPT video
- ✅ Completed 50 LeetCode Easy problems (DONE with LeetCode!)

**End of Month 5 (August - Before Columbia):**
- ✅ Shipped LLM evaluation framework (GitHub + demo)
- ✅ Comprehensive documentation and examples
- ✅ Clean, well-tested codebase
- ✅ Ready to discuss in Columbia courses and job interviews

---

## 🎯 LeetCode Strategy (Minimal Effective Dose)

**Goal:** 50 Easy problems over 6 months (NOT 500 problems!)

### Problem Distribution
- **Weeks 1-4:** Arrays, Strings, Hash Tables (22 problems)
- **Weeks 5-8:** Linked Lists, Binary Trees (10 problems)
- **Weeks 9-12:** Two Pointers, Stacks (8 problems)
- **Weeks 13-16:** Sliding Window, Basic DP (10 problems)
- **After Week 16:** STOP LeetCode, focus on projects

### Daily Pattern
- **3x per week:** Monday, Wednesday, Friday
- **30-45 minutes** per session
- **Focus on understanding**, not speed
- **Write clean code**, not just passing tests

### When to Skip
- Working on critical project deadline
- Deep in CS:APP chapter
- Making breakthrough on neural network implementation
- **LeetCode is lowest priority - projects matter more**

---

## 📚 Essential Resources

### Books (Buy/Download Now)
1. **"Computer Systems: A Programmer's Perspective" (CS:APP)** - $90
   - Primary systems textbook
   - Read Ch 3, 6, 9, 12
2. **"Designing Data-Intensive Applications"** by Martin Kleppmann - $35
   - Modern distributed systems bible
   - Read Ch 1-9
3. **"The C Programming Language"** by K&R - $25
   - C language fundamentals
4. **"Deep Learning"** by Goodfellow/Bengio/Courville - FREE online
   - Theoretical foundations

### Online Courses (FREE)
1. **CMU 15-213:** Computer Systems lectures on YouTube
2. **MIT 6.824:** Distributed Systems lectures
3. **Andrej Karpathy:** Neural Networks: Zero to Hero (YouTube)
4. **Stanford CS231n:** Convolutional Neural Networks (optional)

### Tools to Install
```bash
# Essential
sudo apt install build-essential gdb valgrind

# Nice to have
sudo apt install linux-tools-generic  # perf profiler
pip install pytest numpy matplotlib
```

---

## 🚀 Daily Commit Guidelines

### Commit Message Format
```
Day N: [Main task] + [Secondary task]

Examples:
Day 15: malloc: implement coalescing + tests: edge cases
Day 23: cache-opt: blocking implementation + perf: measure speedup
Day 45: micrograd: backward pass + tests: gradient checking
Day 67: llm-eval: drift detection + docs: API reference
```

### What Counts as a "Good" Commit?
✅ Implemented a feature or fixed a bug  
✅ Added meaningful tests  
✅ Wrote documentation or README updates  
✅ Completed a chapter or video and wrote notes  
✅ Solved a LeetCode problem with explanation  

❌ "Work in progress" with no actual progress  
❌ Tiny typo fixes (batch these)  
❌ Uncommitted local changes sitting for days  

---

## 🎓 How This Prepares You for Columbia

### Skills You'll Have by September 2026:

**Systems Fundamentals:**
- ✅ Memory management and allocation
- ✅ Cache optimization techniques
- ✅ Concurrent programming with threads
- ✅ Understanding of computer architecture

**Distributed Systems:**
- ✅ Scalability and reliability concepts
- ✅ Consistency models and tradeoffs
- ✅ Partitioning and replication strategies
- ✅ Practical distributed system design

**Machine Learning:**
- ✅ Neural network internals (not black box)
- ✅ Backpropagation from first principles
- ✅ Transformer architecture implementation
- ✅ Production ML evaluation frameworks

**Software Engineering:**
- ✅ Clean, well-tested code in C and Python
- ✅ Git workflow and version control
- ✅ Documentation and technical writing
- ✅ Docker, CI/CD, production deployment

### What Columbia Will Teach You:
- Advanced ML theory and optimization
- Specific distributed ML frameworks (Ray, Spark)
- Research methods and paper reading
- Domain-specific applications
- Collaboration with researchers

**You'll arrive prepared, not struggling with basics.**

---

## 🔥 Motivation & Mindset

### Why This Plan Works:
1. **Focused on gaps:** You already know Python/ML basics
2. **Hands-on:** 80% coding, 20% reading (not vice versa)
3. **Portfolio-driven:** Real projects > 500 LeetCode problems
4. **Systems-first:** This is your biggest weakness
5. **Realistic:** 25-30 hrs/week is sustainable

### When You Feel Stuck:
- **Imposter syndrome?** Everyone feels this. Keep coding.
- **Project too hard?** Break it into smaller pieces.
- **Bored with reading?** Switch to coding for a day.
- **Burned out?** Take a day off. This is a marathon.

### Remember:
- You maintained 3.97 GPA while working full-time
- You built production systems that saved $300k+
- You're a first-gen student who's already accomplished a lot
- Columbia admitted you because you're capable
- **You've got this.** 🚀

---

## 📝 End-of-Plan Deliverables

By August 2026, you'll have:

1. **GitHub Portfolio:**
   - Memory allocator in C (with tests)
   - Cache-optimized matrix multiplication
   - Distributed key-value store
   - Neural networks from scratch
   - LLM evaluation framework (production-ready)

2. **Technical Skills:**
   - Systems programming in C
   - Distributed systems design
   - Deep learning implementation
   - Production ML engineering

3. **Documentation:**
   - READMEs for each project
   - Technical blog posts (optional)
   - Code comments and docstrings
   - Architecture diagrams

4. **Confidence:**
   - Can discuss systems at interviews
   - Can explain neural networks deeply
   - Can debug complex systems issues
   - Ready for Columbia's coursework

---

## 🎯 Success Metrics

### How to Know You're On Track:

**After Month 2:**
- Can implement malloc/free from scratch
- Understand cache hierarchy
- Comfortable debugging with GDB/Valgrind

**After Month 4:**
- Can explain distributed systems tradeoffs
- Built working concurrent programs
- Read 9 chapters of Kleppmann

**After Month 6:**
- Implemented neural networks without libraries
- Shipped production-quality ML evaluation framework
- Have impressive GitHub portfolio
- Feel prepared for Columbia

### Red Flags:
- Haven't touched systems projects in 2 weeks
- Only doing LeetCode (avoiding hard work)
- No commits for several days
- Projects half-finished and abandoned

**Fix:** Refocus on the primary goal (Columbia prep), not just checkboxes.

---

## 📅 Quick Reference Calendar

```
March-April (Months 1-2):
├── Week 1-2: C basics + environment setup
├── Week 3-4: Data structures in C
├── Week 5-8: Memory allocator project
└── Milestone: Finish Northwestern MS

May-June (Months 3-4):
├── Week 9-10: Cache optimization
├── Week 11-12: Distributed systems reading
├── Week 13-14: Concurrency project
├── Week 15-16: Distributed systems deep dive
└── Milestone: Complete "Designing Data-Intensive Applications"

July-August (Months 5-6):
├── Week 17-18: Neural networks from scratch
├── Week 19-20: Transformers + attention
├── Week 21-24: LLM evaluation framework (main project)
└── Milestone: Production-ready portfolio project

September 2026: Start Columbia CVN! 🎓
```

---

## 🔧 Repo Structure

```
Learning/
├── README.md                          # This plan
├── PROGRESS.md                        # Weekly progress tracking
├── systems-fundamentals/
│   ├── data-structures-c/
│   ├── malloc-implementation/
│   ├── cache-optimization/
│   └── concurrent-queue/
├── distributed-systems/
│   ├── notes/                         # Chapter summaries
│   ├── simple-kv-store/
│   └── replication-demo/
├── deep-learning-from-scratch/
│   ├── micrograd/
│   ├── makemore/
│   └── transformer/
├── llm-evaluation-framework/          # Main portfolio project
│   └── [Full production structure]
└── leetcode/                          # Minimal - 50 problems only
    └── easy/
```

---

## 🎉 Final Note

This plan is **ambitious but achievable**. You have 6 months and ~600 hours of focused work time. 

**Remember:**
- Quality > Quantity
- Projects > LeetCode
- Systems > More ML theory
- Building > Just reading
- Consistency > Intensity

**You're not just preparing for Columbia. You're building the foundation for a decade-long career in ML systems engineering.**

Let's build something great. 🚀

---

*Last updated: February 2026*  
*Next review: End of each month*
