// Find the Length of a List Using Recursion
#include <stdio.h>
int size(char x[], int i)
{
    if (x[i] == '\0')
        return 0;
    return (1 + size(x, i + 1));
}
int main()
{
    char a[20];
    int count;

    printf("Enter String: ");
    // scanf("%s",a);
    gets(a);
    count = size(a, 0);
    printf("The number of character is: %d", count);
}