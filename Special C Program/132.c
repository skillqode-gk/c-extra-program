// Check Whether a String is a Palindrome or not Using Recursion
#include <stdio.h>
#include <string.h>
void check(char a[], int i)
{
    int len;
    len = strlen(a) - (i + 1);

    if (a[i] == a[len])
    {
        if (i + 1 == len || i == len)
        {
            printf("String is a Palindrome");
            return;
        }
        check(a, i + 1);
    }
    else
        printf("String is not a Palindrome");
}
int main()
{
    char str[50];
    printf("Enter string: ");
    gets(str);
    check(str, 0);
}