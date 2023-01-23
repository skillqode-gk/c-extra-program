// Generate Gray Codes using Recursion
#include <stdio.h>
int bintogray(int bin)
{
    int a, b, result = 0, i = 0;

    if (!bin)
    {
        return 0;
    }
    else
    {
        a = bin % 10;
        bin = bin / 10;
        b = bin % 10;
        if ((a && !b) || (!a && b))
        {
            return (1 + 10 * bintogray(bin));
        }
        else
        {
            return (10 * bintogray(bin));
        }
    }
}

int main()
{
    int n, gray;

    printf("Enter a binary number: ");
    scanf("%d", &n);
    gray = bintogray(n);
    printf("The gray code of %d is %d\n", n, gray);
    return 0;
}