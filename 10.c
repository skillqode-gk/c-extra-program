// C program to Find Maximum Difference Between Two Elements in Array.
#include <stdio.h>
int main()
{
    int a[] = {10, 20, 100, 150, 300};
    int n = sizeof(a) / sizeof(a[0]);
    int i, j, maxDiff;
    maxDiff = a[1] - a[0];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] - a[i] > maxDiff)
                maxDiff = a[j] - a[i];
        }
    }
    printf("Maximum Diffrence Between Two Element is : %d", maxDiff);
}