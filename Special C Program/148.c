// Count the Occurrences of a Word in a Text File
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define buff 1000
int Occurrences(FILE *fptr, const char *word)
{
    char str[buff];
    char *pos;
    int index, count = 0;

    while ((fgets(str, buff, fptr)) != NULL)
    {
        index = 0;

        while ((pos = strstr(str + index, word)) != NULL)
        {
            index = (pos - str) + 1;
            count++;
        }
    }

    return count;
}
int main()
{
    FILE *fptr;
    char path[100];
    char word[50];
    int wCount;

    printf("Enter file path: ");
    scanf("%s", path);

    printf("Enter word to search in file: ");
    scanf("%s", word);

    fptr = fopen(path, "r");

    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");
        exit(EXIT_FAILURE);
    }

    wCount = Occurrences(fptr, word);

    printf("'%s' is found %d times in file.", word, wCount);
    fclose(fptr);

    return 0;
}