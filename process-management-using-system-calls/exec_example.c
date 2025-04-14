#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    switch (pid = fork()) {
        case -1:
            perror("Fork failed");
            exit(-1);
        case 0:
            printf("Child process\n");
            execl("/bin/date", "date", NULL);
            exit(0);
        default:
            wait(NULL);
            printf("Child Terminated\n");
            exit(0);
    }
}
