// Program that Displays which Letters are in the Two Strings but not in Both
// s1 == This is a india    s2 = My name is Girish
//
// s3=This is a indiaMy name is Girish
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "this is my india", str2[100] = "my name is hinal", ans[200];
    int l1 = 0, l2 = 0, flag = 0;
    char ch;

    /*  printf("\nEnter the String 1 :");
     gets(str1);

     printf("\nEnter the String 2 :");
     gets(str2); */

    printf(str1);

    printf("\n");

    printf(str2);
    l1 = strlen(str1);
    l2 = strlen(str2);

    for (int i = 0; i < l1; i++)
    {
        for (int j = i + 1; j < l1; j++)
        {
            if (str1[i] > str1[j])
            {
                ch = str1[i];
                str1[i] = str1[j];
                str1[j] = ch;
            }
        }
    }
    for (int i = 0; i < l2; i++)
    {
        for (int j = i + 1; j < l2; j++)
        {
            if (str2[i] > str2[j])
            {
                ch = str2[i];
                str2[i] = str2[j];
                str2[j] = ch;
            }
        }
    }

    removeDuplicates(str1);
    removeDuplicates(str2);

    l1 = strlen(str1);
    l2 = strlen(str2);
    printf("\n Result (Those Letters which in the two string but not in both String) :");
    for (int i = 0; i < l1; i++)
    {
        int j;
        for (j = 0; j < l2; j++)
        {
            if (str1[i] == str2[j])
                break;
        }
        if (j == l2)
            printf(" %c", str1[i]);
    }

    for (int i = 0; i < l2; i++)
    {
        int j;
        for (j = 0; j < l1; j++)
        {
            if (str2[i] == str1[j])
                break;
        }
        if (j == l1)
            printf(" %c", str2[i]);
    }
    return 0;
}

void removeDuplicates(char *string)
{
    int i = 0;

    while (string[i] != '\0')
    {
        /* Remove all duplicate of character string[i] */
        removeAll(string, string[i], i);
        i++;
    }
}

void removeAll(char *string, const char toRemove, int index)
{
    int i, j;

    i = index + 1;

    while (string[i] != '\0')
    {
        /* If duplicate character is found */
        if (string[i] == toRemove)
        {
            /*
             * Shift all characters from current position to one place left
             */
            j = i;
            while (string[j] != '\0')
            {
                string[j] = string[j + 1];
                j++;
            }
        }
        i++;
    }
}
