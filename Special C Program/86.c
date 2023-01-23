// Program to Form a New String where the First Character and the Last Character have been Exchanged
#include <stdio.h>
int main()
{
    char name[100], newStr[100], vovel = 0;
    int len = 0;
    char tempChar;
    printf("\nEnter the String :");
    gets(name);
    // scanf("%[^\n]s",str);   Get String with space character

    for (int i = 0; name[i] != '\0'; i++)
    {
        newStr[i] = name[i];
        len++;
    }
    newStr[len] = '\0';

    --len;
    newStr[len] = name[0];
    newStr[0] = name[len];

    printf("\nNew String is : %s", newStr);
    return 0;
}