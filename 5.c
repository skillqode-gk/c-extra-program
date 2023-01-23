// Write a C program that reads two integers and checks whether they are multiplied or not.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    if(b>a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a%b==0)
        printf("Number are Multiplied!....");
    else
        printf("Number are not Multiplied!....");
}