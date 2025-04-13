#include <stdio.h>

void add(int *x, int *y, int *z);

int main() {
    int a, b, c;
    printf("Call by reference\n***");
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    add(&a, &b, &c);
    printf("If (a + b) = c = %d\n", c);
    return 0;
}

void add(int *x, int *y, int *z) {
    *z = *x + *y;
}
