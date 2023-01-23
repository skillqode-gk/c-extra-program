// print all number in a range divisible by a given number.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Divisible by a given number is:\n");
    for (i = 1; i <= (n/2); i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
}