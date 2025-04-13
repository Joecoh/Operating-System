#include <stdio.h>

int main() {
    int num = 25, *p;
    float *s, res = 3.14 * 15 * 15;

    p = &num;
    s = &res;

    printf("The value of the variable num is %d\n", num);
    printf("The address stored in pointer p is %p\n", (void *)p);
    printf("The value pointed to by p is %d\n", *p);
    printf("The address of the pointer variable p is %p\n", (void *)&p);

    printf("The value of the variable res is %f\n", res);
    printf("The address stored in pointer s is %p\n", (void *)s);
    printf("The value pointed to by s is %f\n", *s);
    printf("The address of the pointer variable s is %p\n", (void *)&s);

    return 0;
}
