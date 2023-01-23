// Odd number print to given range.
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter starting number: ");
    scanf("%d",&a);
    printf("Enter ending number: ");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
    {
        printf("%d ",i);
        i++;
    }
}