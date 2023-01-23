// Read a String from the User and Append it into a File
#include <stdio.h>
#include <stdlib.h>
#define buff 100
void readFile(FILE *fP)
{
    char ch;
    do
    {
        ch = fgetc(fP);
        putchar(ch);
    } while (ch != EOF);
}
int main()
{
    FILE *fp;
    char path[100];
    char data[buff];

    printf("Enter file path: ");
    scanf("%s", path);

    fp = fopen(path, "a");

    if (fp == NULL)
    {
        printf("\nUnable to open '%s' file.\n", path);
        exit(EXIT_FAILURE);
    }

    printf("\nEnter data to append: ");
    fflush(stdin); 
    fgets(data, buff, stdin);

    fputs(data, fp);
    
    fp = freopen(path, "r", fp);
    
    printf("\nSuccessfully appended data to file. \n");
    printf("Changed file contents:\n\n");
    readFile(fp);

    fclose(fp);

    return 0;
}