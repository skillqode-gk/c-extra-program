// Find the sum of Sine series
#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float n,a;
    printf("Enter number: ");
    scanf("%f",&n);
    n = n * 3.14159/180;
    a = sin(n);
    printf("sin(%f): %.4f",n,a);
}