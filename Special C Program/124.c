// Find the Sum of Elements in a List Recursively
#include <stdio.h>
int getsum(int *a, int i)
{
    int mid;
    if (NULL == a || i < 0)
        return 0;
    return a[i] + getsum(a, i - 1);
}
int main()
{
    int array[5], count = 0, i, sum;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        count++;
    }
    sum = getsum(array, count - 1);
    printf("Sum of Elements in a list is: %d", sum);
}