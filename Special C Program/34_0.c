// Print the Pascal's triangle for n number of rows given by the user
#include <stdio.h>
int main()
{
    int i, j, n, a, s;
    printf("Enter number of row: ");
    scanf("%d", &n);
    s = n;
    for (i = 0; i < n; i++)    // row
    {
        a = 1;
        for (j = 0; j <= s; j++)    //space
            printf(" ");
        
        for (j = 0; j <= i; j++)    // col
        {
            printf("%d ", a);
            a = a * (i - j) / (j + 1);
        }
        s--;
        printf("\n");
    }
}