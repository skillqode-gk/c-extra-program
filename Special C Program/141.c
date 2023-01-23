// Find the Binary Equivalent of a Number without Using Recursion
#include<stdio.h>
int main()
{
    int a[15],i,n;
    printf("Enter number: ");
    scanf("%d",&n);
    i=0;
    while (n>0)
    {
        a[i] = n%2;
        n = n/2;
        i++;
    }
    // printing binary number
    int j = i-1;
    printf("Binary equivalent of number is: ");
    while(j>=0)
    {
        printf("%d",a[j]);
        j--;
    }
    return 0;
}