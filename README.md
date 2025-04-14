# 💻 Operating Systems Laboratory – Complete Guide with C Programs

Welcome to the **Operating Systems Lab** repository! 🚀  
This repo contains **well-structured C programs** covering **core OS concepts**, implemented using **system calls, process management, memory allocation, scheduling algorithms**, and more.

> 🔍 Each program in this repository reflects a real-world Operating System concept, perfect for academic learning and practical application.

---

## 📚 Table of Contents

- [Process Management Using System Calls](#process-management-using-system-calls)
- [CPU Scheduling Algorithms](#cpu-scheduling-algorithms)
- [Inter-Process Communication (IPC)](#inter-process-communication-ipc)
- [Semaphore Implementation](#semaphore-implementation)
- [Deadlock Avoidance – Banker’s Algorithm](#deadlock-avoidance--bankers-algorithm)
- [Deadlock Detection Algorithm](#deadlock-detection-algorithm)
- [Implementation Of Thread](#implementation-of-thread)
- [Paging Techniques](#paging-techniques)
- [Memory Allocation Methods](#memory-allocation-methods)
- [Page Replacement Algorithm](#page-replacement-algorithm)
- [File Organization Techniques](#file-organization-techniques)
- [File Allocation Strategies](#file-allocation-strategies)
- [Disk Scheduling Algorithms](#disk-scheduling-algorithms)

---

## 3️⃣ Process Management Using System Calls

| Program | Description |
|--------|-------------|
| `fork_example.c` | Demonstrates the use of `fork()` to create child processes. |
| `wait_example.c` | Uses `wait()` to synchronize parent and child processes. |
| `exec_example.c` | Demonstrates `exec()` to replace process image. |
| `stat_example.c` | Shows how to use `stat()` to get file info. |
| `dir_example.c` | Uses `opendir()`, `readdir()`, and `closedir()` to read directories. |

---

## 4️⃣ CPU Scheduling Algorithms

| Program | Description |
|--------|-------------|
| `fcfs.c` | First-Come, First-Served Scheduling |
| `sjf.c` | Shortest Job First (Non-Preemptive) |
| `priority.c` | Priority Scheduling |
| `round_robin.c` | Round Robin Scheduling |

---

## 5️⃣ Inter-Process Communication (IPC)

| Program | Description |
|--------|-------------|
| `fibonacci_pipe.c` | Generates Fibonacci series using pipes |
| `pipe_commands.c` | Executes Unix commands via pipes |
| `chat_ipc.c` | Chat messaging simulation between processes |
| `shared_memory.c` | IPC using shared memory segment |
| `producer_consumer.c` | Classic Producer-Consumer problem using IPC |

---

## 6️⃣ Semaphore Implementation

| Program | Description |
|--------|-------------|
| `semaphore_example.c` | Implements semaphores using `wait()` and `signal()` functions to control process access |

---

## 7️⃣ Deadlock Avoidance – Banker’s Algorithm

| Program | Description |
|--------|-------------|
| `bankers_algorithm.c` | Implementation of Banker’s Algorithm for safe state detection |

---

## 8️⃣ Deadlock Detection Algorithm

| Program | Description |
|--------|-------------|
| `deadlock_detection.c` | Detects deadlock using resource allocation and request matrix |

---

## 9️⃣ Implementation of Thread

| Program | Description |
|--------|-------------|
| `thread_example.c` | Demonstrates thread creation using `pthread_create()` and joining using `pthread_join()` |

---

## 🔟 Paging Techniques

| Program | Description |
|--------|-------------|
| `paging_simulation.c` | Simulates basic paging technique in memory management |

---

## 1️⃣1️⃣ Memory Allocation Methods

| Program | Description |
|--------|-------------|
| `first_fit.c` | First Fit Memory Allocation |
| `best_fit.c` | Best Fit Memory Allocation |
| `worst_fit.c` | Worst Fit Memory Allocation |

---

## 1️⃣2️⃣ Page Replacement Algorithm

| Program | Description |
|--------|-------------|
| `fifo_page.c` | FIFO Page Replacement |
| `lru_page.c` | Least Recently Used Page Replacement |

---

## 1️⃣3️⃣ File Organization Techniques

| Program | Description |
|--------|-------------|
| `single_level_dir.c` | Single-Level Directory Implementation |
| `two_level_dir.c` | Two-Level Directory Structure Simulation |

---

## 1️⃣4️⃣ File Allocation Strategies

| Program | Description |
|--------|-------------|
| `sequential_alloc.c` | Sequential File Allocation |
| `linked_alloc.c` | Linked File Allocation |
| `indexed_alloc.c` | Indexed File Allocation |

---

## 1️⃣5️⃣ Disk Scheduling Algorithms

| Program | Description |
|--------|-------------|
| `fcfs_disk.c` | FCFS Disk Scheduling |
| `scan_disk.c` | SCAN Disk Scheduling |
| `cscan_disk.c` | C-SCAN Disk Scheduling |

---

## ⚙️ How to Compile and Run

### ✅ Mac / Linux
```bash
gcc filename.c -o output
./output
