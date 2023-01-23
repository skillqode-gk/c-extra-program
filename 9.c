// C Program to find the largest numbers in a given Array using recursion.
#include <stdio.h>
#include <stdlib.h>
// #define n 5
int i;
int LargestNum(int a[], int pos, int largest)
{
    if (pos == 0)
        return largest;
    if (pos > 0)
    {
        if (a[pos] > largest)
            largest = a[pos];
        return LargestNum(a, pos - 1, largest);
    }
}
int main()
{
    int a[50], size = 15, large;
    for (i = 0; i < size; i++)
        a[i] = rand() % 100 + 1;
    printf("Array Element is: ");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    large = a[0];
    large = LargestNum(a, size - 1, large);
    printf("\nLargest No is: %d", large);
}