// Average number of given list
#include<stdio.h>
void main()
{
    int a,b,i,sum=0,count=0;
    float avg;
    printf("Enter starting number:");
    scanf("%d",&a);
    printf("Enter ending number:");
    scanf("%d",&b);
    if(a>b)
    {
        a = a+b;
        b = a-b;
        a= a-b;
    }
    for(i=a;i<=b;i++)
    {
        sum = sum + i;
        count++;
    }
    avg = (float)sum / count;
    printf("\nSum of total numbers: %d",sum);
    printf("\nAverage of total numbers: %.2f",avg);
}