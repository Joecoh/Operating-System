#include <stdio.h>

int main() {
    int n, i, j, pos, temp;
    int bt[20], wt[20], tat[20], p[20];
    int total_wt = 0, total_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time for each process:\n");
    for(i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;  // store process number
    }

    // Sort processes by burst time (SJF)
    for(i = 0; i < n-1; i++) {
        pos = i;
        for(j = i + 1; j < n; j++) {
            if(bt[j] < bt[pos])
                pos = j;
        }
        // swap burst time
        temp = bt[i]; bt[i] = bt[pos]; bt[pos] = temp;
        // swap process number
        temp = p[i]; p[i] = p[pos]; p[pos] = temp;
    }

    wt[0] = 0; // waiting time of first process is zero

    // calculate waiting time
    for(i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    printf("P#\tBurst\tWait\tTurnaround\n");
    for(i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t%d\t%d\t%d\n", p[i], bt[i], wt[i], tat[i]);
    }

    printf("Average Waiting Time = %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time = %.2f\n", (float)total_tat / n);

    return 0;
}
