// Read a File and Capitalize the First Letter of Every Word in the File
#include<stdio.h>
int Capital(FILE *fp)
{
    char c;
 
    c = fgetc(fp);
    if (c >= 'a' && c <= 'z')
    {
        fseek(fp, -1L, 1);
        fputc(c - 32, fp);
    }
    while(c != EOF)    
    {
        if (c == ' ' || c == '\n')
        {
            c = fgetc(fp);
            if (c >= 'a' && c <= 'z')
            {
                fseek(fp, -1L, 1);
                fputc(c - 32, fp);
            }
        }
        else
        {
            c = fgetc(fp);
        }
    }
    return 1;
}
int main()
{
    FILE *fp1;
    char fp[10];
    int p;
 
    // fp1 = fopen("abc.txt", "w+");
    // fputs("you are entering to learning C language now.....\n",fp1);

    fp1 = fopen("abc.txt", "r+");
    if (fp1 == NULL)
    {
        printf("cannot open the file ");
        //exit(0);
    }
    p = Capital(fp1);
    if (p == 1)    
    {    
        printf("success");
    }
    else
    {
        printf("failure");
    }
    fclose(fp1);
}