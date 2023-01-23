// the sum of digits in a number.
#include<stdio.h>
int main()
{
    int n,rem,a=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n != 0)
    {
        rem = n % 10;
        a = a + rem;
        n = n / 10;
    }
    printf("Sum of digits is: %d",a);
}