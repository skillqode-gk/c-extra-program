// Program to Remove the Given Key from a Dictionary

#include <stdio.h>
int main()
{

    int a[20], n, k;

    printf("\nEnter the Size of Array out of 20 :");
    scanf("%d", &n);

    printf("\nEnter the %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the number if you want to remove:");
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            a[i] = a[i + 1];
            --n;
            // printf("\n a[%d]: %d - %d", i, a[i], n);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n a[%d]: %d", i, a[i]);
    }
    return 0;
}