// Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
#include<stdio.h>
int main()
{
       int a,b,sum;
       printf("Enter a: ");
       scanf("%d",&a);
       printf("Enter b: ");
       scanf("%d",&b);
       printf("Total of a and b is: %d",(a==b)? (a+b)*3 : a+b);
}