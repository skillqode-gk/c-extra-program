// Read a number n and print the series 1 + 2 + 3 + ....... + n 
#include<stdio.h>
int main()
{
    int n,i,sum =0;
    printf("Enter number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum += i;
    }
    printf("\nTotal sum is: %d",sum);
}