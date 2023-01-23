// Find all Numbers in a Range which are Perfect Squares and Sum of all Digits in the Number is Less than 10
#include <stdio.h>
#include <math.h>
int square(int n)
{
    int a, sum = 0;
    a = n;
    while (a > 0)
    {
        sum = sum + (a % 10);
        a = a / 10;
    }
    // printf("\nsum: %d",sum);
    if (sum < 10)
    {
        return n;
    }
}

int main()
{
    int l, u, i;
    printf("Enter lower: ");
    scanf("%d", &l);
    printf("Enter upper: ");
    scanf("%d", &u);
    for (i = sqrt(l); i <= u; i++)
    {
        if (l <= (i * i) && i * i <= u)
            printf(" %d", square(i * i));
    }
    return 0;
}
