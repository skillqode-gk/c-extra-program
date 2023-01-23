// Take the temperature in celsius and convert it to Fahrenhit
#include<stdio.h>
int main()
{
    int c,f;
    printf("Enter Temperature in celsius: ");
    scanf("%d",&c);
    f = 32 + (c*9) / 5;
    printf("Temperature is %d celsius in to %d fahrenhit",c,f);
}