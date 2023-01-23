// Find Whether a Number is a Power of Two
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n != 0)
    {
        while (n % 2 == 0)
        {
            n = n / 2;
        }
        if (n == 1)
        {
            printf("Given number is power of 2");
        }
        else
            printf("Given number is not power of 2");
    }
    return 0;
}