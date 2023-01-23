// Find the factorial of a number without recursion
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("Given number of Factorial is: %d",fact);
}