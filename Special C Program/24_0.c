// Read height in centimeter and then convert the height to feet and inches.
#include<stdio.h>
int main()
{
    int h,i,f;
    printf("Enter Height in centimeters: ");
    scanf("%d",&h);
    f = h / 30;
    h = h%30;
    i = (float) h / 2.54;
    printf("Height is %d feet %d inches",f,i);
}