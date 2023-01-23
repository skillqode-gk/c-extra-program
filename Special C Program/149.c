// Copy the Contents of One File into Another
#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    char c;

    fptr1 = fopen("Skill.txt", "r");
    fptr2 = fopen("xyz.txt", "w");

    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    printf("\nContents copied to...");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}