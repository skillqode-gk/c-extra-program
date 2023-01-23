// check if a number is palindrome
#include <stdio.h>
int main()
{
    int n, rev, a = 0, temp;
    printf("Enter a number:");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rev = n % 10;
        a = a * 10 + rev;
        n = n / 10;
    }
    if (temp == a)
    {
        printf("Given number is palindrome");
    }
    else
    {
        printf("Given number is not palindrome");
    }
    return 0;
}