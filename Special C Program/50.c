// Find the Sum of the Series: 1 + x^2/2 + x^3/3 + … x^n/n
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, x, j, fact;
    double sum = 1.1;
    printf("Enter number:");
    scanf("%d", &n);
    printf("Enter the value of x:");
    scanf("%d", &x);
    i = 1;
    while (i <= n)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j;
            sum += pow(x, i) / fact;
        }
        i++;
    }
    printf("The sum of the series = %0.2lf", sum);
}