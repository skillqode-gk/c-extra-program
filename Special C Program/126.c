// Find the Sum of the Digits of the Number Recursively
#include <stdio.h>
int Digit(int a)
{
    if (a != 0)
    {
        return (a % 10 + Digit(a / 10));
    }
    else
        return 0;
}
int main()
{
    int n, sum;
    printf("Enter number: ");
    scanf("%d", &n);
    sum = Digit(n);
    printf("Sum of digits of number: %d", sum);
}