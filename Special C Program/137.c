// Find the Fibonacci Series without Using Recursion
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter number: ");
    scanf("%d",&n);

    printf("Fibonacci Series: \n%d ",b);

    for(i=1; i<=n; i++)
    {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}