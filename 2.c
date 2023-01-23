// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal point).
#include<stdio.h>
int main()
{
    int dis;
    float lit,avg;

    printf("Enter Distance(Kms): ");
    scanf("%d",&dis);
    printf("Enter Fuel(litters): ");
    scanf("%f",&lit);

    avg = (float)(dis/lit);
    printf("Average consumption: %.2f",avg);
}