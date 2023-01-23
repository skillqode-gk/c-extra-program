// Print Sum of Negative Numbers, Positive Even Numbers and Positive Odd numbers in a List
#include<stdio.h>
int main()
{
    int a[] = {-2,5,2,10,-8,3,-1,6,9,-5};
    int i,n=0,e=0,o=0;
    for ( i = 0; i < 10; i++)
    {
        if(a[i]<0)
        {
            n = n + a[i];
        }
        else if(a[i]%2==0)
        {
            e = e + a[i];
        }
        else if(a[i]%2 !=0)
        {
            o = o + a[i];
        }
    }
    printf("Negative number total: %d",n);
    printf("\nOdd number total: %d",o);
    printf("\nEven number total: %d",e);
    
}