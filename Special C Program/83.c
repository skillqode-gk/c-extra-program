// Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("Enter String: ");
    gets(str);

    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] == 'a')
            printf("$");
        else
            printf("%c",str[i]);
    }
}