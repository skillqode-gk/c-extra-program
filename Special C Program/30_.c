// Largest Even and Largest Odd Number in a List
#include<stdio.h>
int main()
{
    int a[] = {2,5,2,10,8,3,71,6,90,5};
    int i,t,b=0;
    t = 0;
    for ( i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            if(t<a[i])
            t = a[i];
        }
        else
        {
            {
            if(b<a[i])
            b = a[i];
        }
        }
    }
    printf("Largest Even number is: %d",t);
    printf("\nLargest Odd number is: %d",b);
    
}