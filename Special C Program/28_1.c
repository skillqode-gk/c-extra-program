//Print Table of a Given Number
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter number: ");
    scanf("%d",&n);

    table:
    if(i<=10)
    {
        printf("\n%d * %d = %d",n,i,n*i);
        i++;
        goto table;
    }
}