#include <stdio.h>
#include <stdlib.h>  // for exit()
#include <string.h>  // for fgets()

int main() {
    char str1[100], str2[100];
    FILE *fp;

    printf("Reading and writing strings to a file\n");

    // Writing to the file
    fp = fopen("sam.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    printf("\nEnter a string: ");
    fgets(str1, sizeof(str1), stdin);  // safer alternative to gets()
    fputs(str1, fp);
    fclose(fp);

    // Reading from the file
    fp = fopen("sam.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    fgets(str2, sizeof(str2), fp);
    printf("The string read from file is: %s\n", str2);
    fclose(fp);

    return 0;
}
