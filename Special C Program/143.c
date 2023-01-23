// Program to Find All Numbers which are Odd and Palindromes Between a Range of Numbers without using Recursion
#include <stdio.h>
int _isOdd(int no)
{
    return (no % 2 != 0) ? 1 : 0;
}
int _isPalindrom(int no)
{
    int rem, sum = 0, temp;
    temp = no;
    while (no > 0)
    {
        rem = no % 10;
        sum = (sum * 10) + rem;
        no = no / 10;
    }

    if (temp == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int n1, n2;
    float sum = 0, div, fact;

    printf("\nEnter Range in 1st Number : ");
    scanf("%d", &n1);
    printf("\nEnter Range in 1st Number : ");
    scanf("%d", &n2);
    if (n1 > n2) // 1=10 2=20
    {
        n1 = n1 + n2; // 1=30 2=20
        n2 = n1 - n2; // 1=30 2=10
        n1 = n1 - n2; // 1=20 2=10
    }
    for (int i = n1; i < n2; i++)
    {

        if (_isOdd(i) && _isPalindrom(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
