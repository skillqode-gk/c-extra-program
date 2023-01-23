// Inverted star pyramid
#include<stdio.h>
int main()
{
    int i,j,sp=15;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        printf(" ");
        for(j=i;j>=1;j--)
        {
            printf("* ");
        }
        sp++;
        printf("\n");
    }
}