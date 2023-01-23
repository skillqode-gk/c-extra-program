// Search the Number of Times a Particular Number Occurs in a List
#include <stdio.h>
int main()
{
    int a[] = {10, 20, 50, 30, 40, 20, 1, 50, 20, 60};
    int count = 0, i;
    int x = 20;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == x)
        {
            printf("\nat position: %d ", i + 1);
            count++;
        }
    }
    printf("\nSearch the Number of Times a Particular Number Occurs in a List is: %d", x, count);
}