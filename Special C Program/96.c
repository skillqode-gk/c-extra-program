// Check if a String is a Pangram or Not
#include <stdio.h>
void main()
{
    char str[100] = "The quick brown fox jumps over the lazy dog";
    int i, value[26] = {0}, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            count = count + !value[str[i] - 'a'];
            value[str[i] - 'a'] = 1;
        }
        else if ('A' <= str[i] && str[i] <= 'Z')
        {
            count = count + !value[str[i] - 'A'];
            value[str[i] - 'A'] = 1;
        }
    }
    if (count == 26)
    {
        printf("The String is a Pangram String.");
    }
    else
    {
        printf("The String is not a Pangram String.");
    }
}