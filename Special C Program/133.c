// Reverse a String Using Recursion
#include <stdio.h>
#include <string.h> 
void reverse(char a[], int i, int size)
{
    char temp;
    temp = a[i];
    a[i] = a[size - i];
    a[size - i] = temp;
    if (i == size / 2)
    {
        return;
    }
    reverse(a, i + 1, size);
}
int main()
{
    char str[20];
    int size;
 
    printf("Enter string: ");
    scanf("%s", str);
    size = strlen(str);
    reverse(str, 0, size - 1);
    printf("The string after reversing is: %s", str);
    return 0;
}