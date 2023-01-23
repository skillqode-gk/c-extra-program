// Check if a Number is a Strong Number
#include <stdio.h>
int strong(int n)
{
    int i,sum=0,fact,num,rem;
    for(num=n;num>0;num/=10)
    {
        rem=num%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
    return sum;
}
int main()
{
    int n,sum;
    printf("Enter a Number: ");
    scanf("%d",&n);
    sum=strong(n);
    if(n==sum)
    {
        printf("%d is a Strong Number",n);
    }
    else
    {
        printf("%d is not a Strong Number",n);
    }
    return 0;
}
