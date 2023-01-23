// Find Element Occurring Odd Number of Times in a List
#include <stdio.h>
int Oddnum(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count % 2 != 0)
            return a[i];
    }
    return 0;
}
int main()
{
    int a[] = {7, 5, 2, 7, 5, 2, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    // printf("Array size: %d\n",n);
    printf("Element Occurring Odd number of times is: %d", Oddnum(a, n));
}