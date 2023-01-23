// Check if a Number is a Strong Number
#include <stdio.h>
int main()
{
    int i, sum=0,fact,n,num,rem;
    printf("Enter a Number: ");
    scanf("%d",&n);
    num=n;
    while(n != 0)
    {
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(num==sum)
    {
        printf("%d is a Strong Number",num);
    }
    else
    {
        printf("%d is not a Strong Number",num);
    }
    return 0;
}