#include <stdio.h>

int main() {
    int n = 3, m = 3; // processes and resources
    int alloc[3][3] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}};
    int max[3][3]   = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}};
    int avail[3]    = {3, 3, 2};

    int need[3][3], finish[3] = {0}, safe[3], i, j, k;

    // Calculate need matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];

    int count = 0;
    while (count < n) {
        for (i = 0; i < n; i++) {
            if (!finish[i]) {
                int can_run = 1;
                for (j = 0; j < m; j++)
                    if (need[i][j] > avail[j]) {
                        can_run = 0;
                        break;
                    }

                if (can_run) {
                    for (k = 0; k < m; k++)
                        avail[k] += alloc[i][k];
                    safe[count++] = i;
                    finish[i] = 1;
                }
            }
        }
    }

    printf("Safe sequence: ");
    for (i = 0; i < n; i++)
        printf("P%d ", safe[i]);
    printf("\n");

    return 0;
}
