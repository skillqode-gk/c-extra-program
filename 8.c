// C Program to find the largest two numbers in a given Array.
#include <stdio.h>
#include <stdlib.h>
#define n 10
int a[n], i;
void LargestNum()
{
    int Largest, SecLarge;
    Largest = a[0];
    SecLarge = a[1];
    if (Largest < SecLarge)
    {
        int temp = Largest;
        Largest = SecLarge;
        SecLarge = temp;
    }
    for (i = 2; i < n; i++)
    {
        if (a[i] > Largest)
        {
            SecLarge = Largest;
            Largest = a[i];
        }
        else if (a[i] > SecLarge && a[i] != Largest)
        {
            SecLarge = a[i];
        }
    }
    printf("\nFirst Largest no is: %d", Largest);
    printf("\nSecond Largest no is: %d", SecLarge);
}
int main()
{
    for (i = 0; i < n; i++)
        a[i] = rand() % 100 + 1;
    printf("Array Element is: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    LargestNum();
}