// Find the Second Largest Number in a List
#include <stdio.h>
int main()
{
    int a[10] = {1, 12, 15, 45, 20, 0, 48, 95, 2, 3};
    int i, first = 0, second = 0;
    for (i = 0; i < 10; i++)
    {
        if (first < a[i])
        {
            second = first;
            first = a[i];
        }
    }
    printf("Second largest number in a list is: %d", second);
}