// Check If Two Numbers are Amicable Numbers(sum of the divisors of one number is equal to the other number )
#include<stdio.h>
int main()
{
    int n1,n2,i,a=0,b=0;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    for ( i = 1; i < n1; i++)
    {
        if(n1 % i == 0)
        a = a + i;
    }
    for ( i = 1; i < n2; i++)
    {
        if(n2 % i == 0)
        b = b + i;
    }

    if (n1 == b && n2 == a)
    printf("%d and %d are Amicable numbers",n1,n2);
    else
    printf("%d and %d are not Amicable numbers",n1,n2);
  
}