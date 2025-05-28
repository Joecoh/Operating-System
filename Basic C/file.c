#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];

    printf("Enter filename to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");  // open file for reading
    if (fp == NULL) {
        printf("Failed to open file %s\n", filename);
        return 1;
    } else {
        printf("File %s opened successfully.\n", filename);
    }

    fclose(fp);
    printf("File closed successfully.\n");

    return 0;
}
