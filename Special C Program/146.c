// Count the Number of Lines in a Text File
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp;
    int count = 0;

    fp = fopen("Skill.txt", "r");

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            count++;
    }

    printf("Number of Lines in given file: %d", count);
    fclose(fp);

    return 0;
}