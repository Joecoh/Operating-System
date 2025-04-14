#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;
    int x = 5;

    pid = fork();

    if (pid < 0) {
        printf("Process creation error\n");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        x++;
        printf("Child process:\n");
        printf("Process ID: %d\n", getpid());
        printf("Value of x: %d\n", x);
        printf("Parent Process ID: %d\n", getppid());
    } else {
        x++;
        printf("Parent process:\n");
        printf("Process ID: %d\n", getpid());
        printf("Value of x: %d\n", x);
        printf("Shell Process ID (parent of this process): %d\n", getppid());
    }

    return 0;
}
