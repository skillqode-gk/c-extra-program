// Take in Two Strings and Display the Larger String without Using Built-in Functions
#include<stdio.h>
int main()
{
    char a[50],b[50];
    int i,j;
    printf("Enter string1: ");
    gets(a);
    printf("Enter string2: ");
    gets(b);

    for(i=0;a[i] !='\0';i++);
    for(j=0;b[j] !='\0';j++);

    if(i>j)
    printf("larger string is: %s",a);
    else
    printf("larger string is: %s",b);
}