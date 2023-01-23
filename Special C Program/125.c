// Find the Binary Equivalent of a Number Recursively
#include <stdio.h>
int binary(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2) + 10 * binary(n / 2);
}
int main()
{
    int n, bin;
    printf("Enter number: ");
    scanf("%d", &n);

    bin = binary(n);
    printf("Binary equivalent of %d is %d",n, bin);
}