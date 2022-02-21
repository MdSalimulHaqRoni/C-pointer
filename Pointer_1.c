#include<stdio.h>
int main()
{
    printf("Pointer in C: Introduction:\n");
    char x = 'a';
    char *p;
    p = &x;
    printf("Value of x: %c\n", x);
    printf("Value of x: %c\n", *p);
}
