//read a number n and compute n + nn + nnn
#include<stdio.h>
int main()
{
    int n,i,sum=0,a=0;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=3;i++)
    {
        a= a*10 + n;
        printf("%d ",a);
        sum = sum + a;
    }
    printf("\nSeries total is: %d",sum);
} 