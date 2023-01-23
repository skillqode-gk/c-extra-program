// Read two number and print thier quotient and remainder.
#include<stdio.h>
int main()
{
    int a,b,que,rem;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    que = a / b;
    rem = a % b;
    printf("Quotient is: %d",que);
    printf("Remainder is: %d",rem);
}