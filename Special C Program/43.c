// Check if a Number is a Prime Number within a Given Range
#include <stdio.h>
int prime(int n)
{
    int j, f = 1;
    for (j = 2; j <= (n / 2); j++)
    {
        if (n % j == 0)
            f = 0;
    }
    return f;
}
int main()
{
    int n1, n2, i, f;
    printf("Enter two number: ");
    scanf("%d%d", &n1, &n2);
    for (i = n1 + 1; i < n2; i++)
    {
        f = prime(i);
        if (f == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}