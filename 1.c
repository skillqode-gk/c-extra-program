// Write a C program that accepts two item’s weight (floating points' values ) and number of purchases (floating points' values) and calculate the average value of the items.
#include<stdio.h>
int main()
{
    float itm1, itm2, w1,w2,avg;
    printf("Enter number of purchases Item 1: ");
    scanf("%f",&itm1);
    printf("Enter weight of Item 1: ");
    scanf("%f",&w1);
    printf("Enter number of purchases Item 2: ");
    scanf("%f",&itm2);
    printf("Enter weight of Item 2: ");
    scanf("%f",&w2);

    avg = ((itm1 * w1) + (itm2 * w2)) / (itm1 + itm2);
    printf("Average value of the items: %.2f",avg);
}