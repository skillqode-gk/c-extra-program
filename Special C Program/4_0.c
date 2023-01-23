// Reverse number print
#include <stdio.h>
int main()
{
    int n, rem, a = 0, i;
    printf("Enter number: ");
    scanf("%d", &n);

    for (; n != 0;)
    {
        rem = n % 10;
        a = a * 10 + rem;
        n = n / 10;
    }
    printf("Reverse number is: %d", a);
}