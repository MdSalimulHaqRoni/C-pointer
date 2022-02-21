#include<Stdio.h>
int sum(int *a, int size)
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
    {
        sum = sum + *(a + i);
    }
    return sum;
}
int main()
{
    int a[3] = {4, 5, 10};
    int result = sum(a, 3);
    printf("Sum of the array is: %d", result);
}
