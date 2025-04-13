# 🖥️ OS File Handling & Pointer Concepts in C

This folder contains C programs that demonstrate basic concepts of **file handling**, **pointers**, and **call by reference**, with relevance to **Operating System (OS)** topics such as file system management, system calls, and memory handling.

---

## 📁 List of Programs

### 1. `call_by_reference.c`
- **Description:** Demonstrates how to pass values by reference using pointers.
- **OS Relevance:** Helps understand memory referencing, which relates to how processes and variables are managed in memory.
- **Key Concepts:** Pointers, Function Arguments, Memory Addressing

---

### 2. `pointer_example.c`
- **Description:** Shows declaration, initialization, and usage of pointer variables with both `int` and `float` types.
- **OS Relevance:** Links to memory addressing and access — core parts of process management in OS.
- **Key Concepts:** Pointers, Memory Addressing, Dereferencing

---

### 3. `file_read_write.c`
- **Description:** Reads a string from user input and writes it to a file, then reads it back and displays it.
- **OS Relevance:** Demonstrates file handling, a critical part of OS file system services and system calls.
- **Key Concepts:** File Handling (`fopen`, `fputs`, `fgets`, `fclose`), Streams, File I/O, System Calls

---

## 🔧 How to Compile and Run (Mac/Linux)

```bash
gcc filename.c -o output
./output
