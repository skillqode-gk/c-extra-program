// Find the GCD of Two Numbers
#include <stdio.h>
int gcd(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    while (y != 0)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}
int main()
{
    int n1, n2,a;

    printf("Please Enter two integer Values: ");
    scanf("%d%d", &n1, &n2);
    a = gcd(n1, n2);
    printf("GCD of %d and %d is = %d", n1, n2, a);
    return 0;
}