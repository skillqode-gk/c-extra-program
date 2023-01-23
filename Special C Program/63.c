// Put Even and Odd elements in a List into Two Different Lists
#include <stdio.h>
int Array(int x[], int y)
{
    int i;
    for (i = 0; i < y; i++)
    {
        printf("%d ", x[i]);
    }
}
int main()
{
    int a[10] = {1, 12, 15, 4, 20, 10, 48, 5, 2, 3};
    int i, j = 0, k = 0, even[10], odd[10];

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[j] = a[i];
            j++;
        }
        else
        {
            odd[k] = a[i];
            k++;
        }
    }
    printf("Even Element Array:\n");
    Array(even, j);
    printf("\nOdd Element Array:\n");
    Array(odd, k);
}