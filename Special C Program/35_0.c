// Check if a Number is a Perfect Number
#include <stdio.h>
int main()
{
    int n, i, r, a = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            a = a + i;
        }
    }
    if (n == a)
        printf("%d is Perfect number.", n);
    else
        printf("%d is not Perfect number.", n);
}