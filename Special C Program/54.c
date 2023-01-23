// test Collatz Conjecture for a Given Number
#include <stdio.h>
int Collatz(int a)
{
    while (a > 1)
    {
        if (a % 2 == 0)
        {
            a /= 2;
            printf("%d ", a);
        }
        else
        {
            a = 3 * a + 1;
            printf("%d ", a);
        }
    }
}
int main()
{
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sequence: %d ",n);
    Collatz(n);
}