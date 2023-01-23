//all integers aren't divisible by either 2 or 3.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        if(i%2 !=0 && i%3 !=0)
        printf("%d ",i);
    }
    
}