// Find if a Number is Prime or Not Prime Using Recursion
#include <stdio.h>
int prime(int a, int b)
{
    if (b == 1)
        return 1;
    else
    {
        if (a % b == 0)
            return 0;
        else
            return prime(a, b - 1);
    }
}
int main()
{
    int n, check;
    printf("Enter number: ");
    scanf("%d", &n);
    check = prime(n, n / 2);
    if (check == 1)
        printf("%d is prime number.", n);
    else
        printf("%d is not prime number.", n);
}