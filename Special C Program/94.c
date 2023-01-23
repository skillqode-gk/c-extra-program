// Check if a String is a Palindrome or Not
#include <stdio.h>
int main()
{
    char a[50], b[50];
    int i, j, k, flag = 0;
    printf("Enter string: ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
        ;
    k = i;
    for (j = 0; j < i; j++)
    {
        if (a[j] != a[--k])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("String is not a Palindrome");
    else
        printf("String is a Palindrome");
}