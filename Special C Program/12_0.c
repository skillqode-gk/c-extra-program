// smallest divisior of integer
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number: ");
    scanf("%d",&n);

    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            printf("Smallest Divisor: %d",i);
            break;
        }
    }
}