// Calculate the Number of Digits and Letters in a String
#include <stdio.h>
void main()
{
    char s[50];
    int i, count = 0;
    printf("Enter string: ");
    gets(s);
    printf("Your stirng: %s", s);
    for(i=0;s[i] != '\0';i++);
    for(int j=0; j<i;j++)
    {
        if(s[j] != ' ')
        {
            count++;
        }
    }
    printf("The Number of Digits and Letters in a String: %d",count);
}