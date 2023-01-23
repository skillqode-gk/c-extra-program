// Find the Sum of First N Natural Numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("Total sum is: %d",sum);
}