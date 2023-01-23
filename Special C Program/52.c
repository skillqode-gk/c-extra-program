// Determine all Pythagorean Triplets in the Range
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=20;i++)
    {
        for(j=i+1;j<=20;j++)
        {
            for(k=j+1;k<=20;k++)
            {
                if((i*i) + (j*j) == (k*k))
                printf("\n%d + %d = %d",i,j,k);
            }
        }
    }
}