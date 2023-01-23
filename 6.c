// Write a C program that accepts three integers from the user and find the second largest number among these.
#include<stdio.h>
int Largetst(int x,int y,int z)
{
    if((x>=y && x<=z) || (x>=y && x<=z))
        return 1;
        else 
        return 0;
}
int main()
{
    int a,b,c;
    printf("Enter a: ");
    scanf("%d,",&a);   
    printf("Enter b: ");
    scanf("%d,",&b);   
    printf("Enter c: ");
    scanf("%d,",&c);

    if(Largetst(a,b,c))
        printf("Second Largest no is: %d",a);   
    else if(Largetst(b,a,c))
        printf("Second Largest no is: %d",b);   
    else
        printf("Second Largest no is: %d",c);   
}