// Form an Integer that has the Number of Digits at Ten's Place and the Least Significant Digit of the Entered Integer at One's Place
#include<stdio.h>
int main()
{
    int n,count = 0,a;
    printf("Enter number: ");
    scanf("%d",&n);
    a = n%10;
    while(n != 0)
    {
        n= n/10;
        count++;
    }
    count = count*10 + a;
    printf("New number: %d",count);
}