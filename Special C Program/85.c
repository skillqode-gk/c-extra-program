// Detect if Two Strings are Anagrams
#include <stdio.h>

int anagram(char x[], char y[])
{
    int n1[26] = {0}, n2[26] = {0}, i = 0;

    while (x[i] != '\0')
    {
        n1[x[i] - 'a']++;
        i++;
    }
    i = 0;
    while (y[i] != '\0')
    {
        n2[y[i] - 'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (n1[i] != n2[i])
            return 0;
    }
    return 1;
}
int main()
{
    char str1[100], str2[100];
    int flag;

    printf("Enter the string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    flag = anagram(str1, str2);
    if (flag == 1)
        printf("%s and %s are anagrams", str1, str2);
    else
        printf("\n %s and %s are not anagrams", str1, str2);
    return 0;
}