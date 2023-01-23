// swapping number without temporary variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Before swapping value\n");
    printf("\ta: %d && b: %d",a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping value\n");
    printf("\ta: %d && b: %d",a,b);
}