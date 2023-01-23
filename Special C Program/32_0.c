// Find Those Numbers which are Divisible by 7 and Multiple of 5 in a Given Range of Numbers
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter starting number:");
    scanf("%d",&a);
    printf("Enter ending number:");
    scanf("%d",&b);
    printf("Those numbers which are Divisible by 7 and Multiple of 5: \n");
    for(i=a;i<=b;i++)
    {
        if(i%35==0)
        printf("%d ",i);
    }
}