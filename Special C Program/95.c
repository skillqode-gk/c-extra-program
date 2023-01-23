// Calculate the Number of Upper Case Letters and Lower Case Letters in a String
#include <stdio.h>
int main()
{
    char str[50];
    int i, upper = 0, lower = 0;
    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else
            lower++;
    }
    printf("Upper case in your string is: %d", upper);
    printf("\nLower case in your string is: %d", lower);
}