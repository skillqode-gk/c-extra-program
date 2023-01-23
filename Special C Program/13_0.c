// count the number of digits in a number.
#include<stdio.h>
int main()
{
    int n,count=0,r;
    printf("Enter number:");
    scanf("%d",&n);
    while (n != 0)
    {
        r = n %10;
        n = n/ 10;
        count++;
    }
    printf("number of digits is: %d",count);
}