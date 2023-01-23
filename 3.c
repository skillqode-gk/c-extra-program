// Write a C program to calculate the distance between the two points.
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float dis;
    printf("Enter x1: ");
    scanf("%d",&x1);
    printf("Enter x2: ");
    scanf("%d",&x2);
    printf("Enter y1: ");
    scanf("%d",&y1);
    printf("Enter y2: ");
    scanf("%d",&y2);

    dis = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("Distance Between of two point is: %.2f",dis);
}