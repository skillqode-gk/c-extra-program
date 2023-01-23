// Program to Multiply All the Items in a Dictionary

#include <stdio.h>
int main()
{

    int a[20], n;

    printf("\nEnter the Size of Array out of 20 :");
    scanf("%d", &n);

    printf("\nEnter the %d elements :", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long mul = 1;
    for (int i = 0; i < n; i++)
    {
        mul *= a[i];
    }
    printf("\nMultiplication of Element is : %lu", mul);
    return 0;
}