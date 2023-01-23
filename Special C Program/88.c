// Take in a String and Replace Every Blank Space with Hyphen
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter String: ");
    gets(str);
    for(i=0;str[i] !='\0';i++)
    {
        if(str[i] == ' ')
        {
            printf("-");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    
}