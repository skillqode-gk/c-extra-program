// Find the GCD of Two Numbers Using Recursion
#include<stdio.h>
int GCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return GCD(a - b, b);
        }
        else
        {
            return GCD(a, b - a);
        }
    }
    return a;
}
int main()
{
    int n1,n2,a;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);

    a = GCD(n1,n2);
    printf("GCD of two number is: %d",a);
}