// Calculate the Length of a String Without Using a Library Function
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter String: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++);
    printf("Length of string is: %d", i);
}