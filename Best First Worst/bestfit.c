#include <stdio.h>

int main() {
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    int m = 5, n = 4, i, j, best;
    int allocated[n];

    for(i = 0; i < n; i++) {
        best = -1;
        for(j = 0; j < m; j++) {
            if(blockSize[j] >= processSize[i]) {
                if(best == -1 || blockSize[j] < blockSize[best])
                    best = j;
            }
        }

        if(best != -1) {
            allocated[i] = best;
            blockSize[best] -= processSize[i];
        } else {
            allocated[i] = -1;
        }
    }

    for(i = 0; i < n; i++) {
        printf("Process %d -> ", i+1);
        if(allocated[i] != -1)
            printf("Block %d\n", allocated[i]+1);
        else
            printf("Not Allocated\n");
    }

    return 0;
}
