// check if a number is palindrome
#include <stdio.h>
int reverse(int num)
{
    int rem;
    static int a = 0;
    if (num != 0)
    {
        rem = num % 10;
        a = a * 10 + rem;
        reverse(num / 10);
    }
    else
    {
        return a;
    }
    return a;
}

int isPalindrome(int num)
{
    if (num == reverse(num))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num) == 1)
    {
        printf("Number is a palindrome");
    }
    else
    {
        printf("Number is not a palindrome number");
    }
    return 0;
}
