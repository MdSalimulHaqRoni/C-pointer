#include<Stdio.h>
int main()
{
    printf("Pointer in C: Introduction:\n");
    int x = 10;
    int y = 20;
    int z = 50;
    int *p1, *p2, *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;

    if(*p1 > *p2 && *p1 > *p3)
    {
        printf("The large number is: %d\n", *p1);
    }
    else if(*p2 > *p1 && *p2 > *p3)
    {
        printf("The large number is: %d\n", *p2);
    }
    else
    {
        printf("The large number is: %d", *p3);
    }



}
