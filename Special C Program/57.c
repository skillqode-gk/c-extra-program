// Clear the Rightmost Set Bit of a Number
#include <stdio.h>
int setbit(int n)
{
    return n & (n - 1);
}
int main()
{
    int n, bit;
    printf("Enter number: ");
    scanf("%d", &n);
    bit = setbit(n);
    printf("Rightmost Set bit of a number is: %d", bit);
    return 0;
}
