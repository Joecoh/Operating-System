# Fibonacci and Prime using Pipe - `fibprime.c`

## Objective
Generate 25 Fibonacci numbers in a child process and identify prime numbers among them in the parent process using pipe for inter-process communication.

---

## Inter-Process Communication (IPC)

### What is IPC?
Inter-Process Communication allows one process to communicate and share data with another. Common IPC mechanisms in Linux:
- Pipe
- Message Queue
- Shared Memory
- Semaphore
- Signal
- Sockets

---

## Pipe

### About
- Pipes are unidirectional communication channels.
- Created using `pipe()` system call.
- Returns two file descriptors:  
  - `pfd[0]` → read end  
  - `pfd[1]` → write end
- Only used between parent and child processes.

---

## Algorithm

1. Declare an array `ar` to store Fibonacci numbers.
2. Create a pipe using `pipe(pfd)`.
   - If failed, exit.
3. Use `fork()` to create a child process.
4. **Child Process:**
   - Generate 25 Fibonacci numbers.
   - Store them in `ar[]`.
   - Write `ar[]` to pipe using `write(pfd[1], ...)`.
5. **Parent Process:**
   - Wait for child to finish using `wait(NULL)`.
   - Read from pipe into `br[]` using `read(pfd[0], ...)`.
   - Check each number in `br[]`:
     - If prime, print it.
6. End.

---
