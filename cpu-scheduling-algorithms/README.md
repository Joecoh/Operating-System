# 🧠 CPU Scheduling Algorithms in C

This repository contains implementations of **four classical CPU Scheduling Algorithms** written in C:

- 🔹 First-Come First-Served (FCFS)
- 🔹 Shortest Job First (SJF)
- 🔹 Priority Scheduling
- 🔹 Round Robin (RR)

These algorithms are commonly studied in Operating Systems courses and are fundamental for understanding process scheduling in modern systems.

---

## 📁 File Structure

| File Name      | Algorithm               | Scheduling Type   | Preemptive | Description                                    |
|----------------|-------------------------|-------------------|------------|------------------------------------------------|
| `fcfs.c`       | First-Come First-Served | Non-preemptive    | ❌         | Executes processes in the order they arrive    |
| `sjf.c`        | Shortest Job First      | Non-preemptive    | ❌         | Picks the process with the shortest burst time |
| `priority.c`   | Priority Scheduling     | Non-preemptive    | ❌         | Schedules based on user-assigned priority      |
| `Round_Robin.c`| Round Robin             | Preemptive        | ✅         | Time-sliced scheduling with fixed quantum      |

---


