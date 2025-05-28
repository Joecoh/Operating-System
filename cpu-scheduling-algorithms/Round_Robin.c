#include <stdio.h>

int main() {
    int n, i, time_quantum;
    int bt[20], rem_bt[20], wt[20], tat[20];
    int t = 0, done;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time for each process:\n");
    for(i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];  // initialize remaining burst time
        wt[i] = 0;          // initialize waiting time
    }

    printf("Enter time quantum: ");
    scanf("%d", &time_quantum);

    while(1) {
        done = 1;
        for(i = 0; i < n; i++) {
            if(rem_bt[i] > 0) {
                done = 0;  // there is a pending process

                if(rem_bt[i] > time_quantum) {
                    t += time_quantum;
                    rem_bt[i] -= time_quantum;
                } else {
                    t += rem_bt[i];
                    wt[i] = t - bt[i];  // waiting time = current time - burst time
                    rem_bt[i] = 0;
                }
            }
        }
        if(done)
            break;
    }

    int total_wt = 0, total_tat = 0;
    printf("P#\tBurst\tWait\tTurnaround\n");
    for(i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    printf("Average Waiting Time = %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time = %.2f\n", (float)total_tat / n);

    return 0;
}
