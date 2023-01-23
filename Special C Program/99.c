// Program to Form a New String Made of the
// First 2 and Last 2 characters From a Given String

#include <stdio.h>
int main()
{
    char name[100], str[100];
    int len = 0, k = 0;

    printf("\nEnter the String :");
    gets(name);

    // scanf("%[^\n]s",str);   Get String with space character

    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
        if (i < 2)
        {
            str[k] = name[i];
            k++;
        }
    }
    str[k++] = name[len - 2];
    str[k++] = name[len - 1];
    str[k] = '\0';

    printf("\nLength of the String is : %s", str);
    return 0;
}

/*
Enter the String :Skill Qode ItInstitute

Length of the String is : Skte
*/