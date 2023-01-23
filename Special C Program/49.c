// Find the Sum of the Series: 1 + 1/2 + 1/3 + ..... + 1/N
#include <stdio.h>
int main()
{
    float n, i, a = 0, b;
    printf("Enter number: ");
    scanf("%f", &n);

    for (i = 1.0; i <= n; i++)
    {
        b = 1 / i;
        a = a + b;
    }
    printf("1 + 1/2 + 1/3 + .... + 1/%.f = %.2f", n, a);
}