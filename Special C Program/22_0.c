// Compute Simple Intrest given all the required value.
#include<stdio.h>
int main()
{
    int p,r,t;
    float i;
    printf("Enter principal: ");
    scanf("%d",&p);
    printf("Enter rate: ");
    scanf("%d",&r);
    printf("Enter time period: ");
    scanf("%d",&t);

    i = (p*r*t)/100;
    printf("Simple intrest is: %.2f",i);
}