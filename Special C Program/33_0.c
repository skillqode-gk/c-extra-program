// Check if a Number is an Armstrong Number
#include <stdio.h>
int main()
{
    int n, temp, rem, a = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        a = a + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == a)
        printf("%d is Armstrong number",temp);
    else
        printf("%d is not Armstrong number",temp);
}