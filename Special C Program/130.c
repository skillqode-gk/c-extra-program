// Find the Product of two Numbers Using Recursion
#include <stdio.h>
int product(int x, int y)
{
    if (x < y)
        return product(y, x);
    else if (y != 0)
        return x + product(x, y - 1);
    else
        return 0;
}
int main()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    c = product(a, b);
    printf("Product of a and b is : %d", c);
}