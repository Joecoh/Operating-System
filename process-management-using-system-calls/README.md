This repository contains C programs demonstrating fundamental concepts in **Operating System (OS) Programming**. These programs explore various system calls and process management techniques in Unix-like environments.

### Programs:

1. **fork_example.c**  
   Demonstrates the use of `fork()` to create child processes. This program showcases how a process can create a new process (child) and how both processes execute in parallel.

2. **wait_example.c**  
   Uses the `wait()` system call to synchronize parent and child processes. It demonstrates how the parent process waits for the child process to complete before it continues its execution.

3. **exec_example.c**  
   Demonstrates the use of the `exec()` system call to replace the current process image with a new one. In this case, it replaces the running process with the `date` command to display the current system date.

4. **stat_example.c**  
   Shows how to use the `stat()` system call to retrieve detailed information about a file. It provides details such as file size, permissions, and timestamps (last access and modification times).

5. **dir_example.c**  
   Demonstrates how to use `opendir()`, `readdir()`, and `closedir()` system calls to read the contents of a directory. This program lists all files and directories inside a specified directory.

---

### How to Run the Programs

1. **Compile the C programs** using the following command:

   ```bash
   gcc <program_name.c> -o <program_name>

