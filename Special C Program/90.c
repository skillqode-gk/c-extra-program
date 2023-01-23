// Remove the Characters of Odd Index Values in a String
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
            printf("%c", str[i]);
    }
}