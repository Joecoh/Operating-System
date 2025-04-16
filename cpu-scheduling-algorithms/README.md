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
## 🧠 Algorithm Details & Explanations

### 1️⃣ FCFS (First-Come First-Served)

- Non-preemptive scheduling algorithm.
- Processes are executed in the order they arrive in the queue.
- Simple to implement but can lead to long waiting times if a long process arrives first (Convoy effect).

**Formulas**:
- **Waiting Time (WT)** = Start Time - Arrival Time
- **Turnaround Time (TAT)** = Completion Time - Arrival Time

---

### 2️⃣ SJF (Shortest Job First)

- Non-preemptive scheduling algorithm.
- Selects the process with the shortest burst time.
- It provides minimum average waiting time among all scheduling algorithms but can cause starvation of long processes.

**Formulas**:
- **WT** = TAT - Burst Time
- **TAT** = Completion Time - Arrival Time

---

### 3️⃣ Priority Scheduling

- Non-preemptive.
- Each process is assigned a priority.
- The process with the highest priority (lower number = higher priority) is executed first.
- Starvation can happen for low-priority processes.

**Formulas**:
- **WT** = TAT - Burst Time
- **TAT** = Completion Time - Arrival Time

---

### 4️⃣ Round Robin

- Preemptive.
- Each process gets a fixed time slot (quantum).
- After the time quantum expires, the process is moved to the end of the ready queue.
- Good for time-sharing systems.

**Formulas**:
- Calculated based on remaining burst time and order of execution.
- WT and TAT are calculated after simulating multiple rounds.

---

## 📊 Example Output (Priority Scheduling)

```
Enter no. of process : 3
Burst time for process P1 (in ms) : 5
Priority for process P1 : 2
Burst time for process P2 (in ms) : 3
Priority for process P2 : 1
Burst time for process P3 (in ms) : 4
Priority for process P3 : 3

Priority Scheduling
--------------------------------------
Process B-Time Priority T-Time W-Time
--------------------------------------
P2       3       1       3      0
P1       5       2       8      3
P3       4       3      12      8
--------------------------------------

Average waiting time: 3.67ms  
Average turn around time : 7.67ms  
```

---

## 💡 Notes

- These programs assume **all processes arrive at time 0**.
- You can modify the logic to add Arrival Time for more realistic simulations.
- Gantt Charts and metrics are printed clearly in each program.

---

