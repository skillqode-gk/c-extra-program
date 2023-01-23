// swapping number without temporary variable.
#include<stdio.h>
int main()
{
    int a,b,*x,*y;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    x = &a, y = &b;
    printf("Before swapping value\n");
    printf("\ta: %d && b: %d",*x,*y);

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    printf("\nAfter swapping value\n");
    printf("\ta: %d && b: %d",*x,*y);
}