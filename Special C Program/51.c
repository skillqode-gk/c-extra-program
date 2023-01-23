// Compute the Value of Euler's Number e. Use the Formula: e = 1 + 1/1! + 1/2! + …… 1/n!
#include <stdio.h>
int main()
{
    int n, i, fact;
    double sum = 1.0;
    printf("Enter number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
            sum = sum + (1.0 / fact);
        i++;
    }
    printf("Eules's Series: %.4lf", sum);
}