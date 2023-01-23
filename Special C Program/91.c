// Calculate the Number of Words and the Number of Characters Present in a String
#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    printf("\nNumber of words in String is: %d",(count+1));
    printf("\nCharacter of this string is: %d",(i-count));
}