// Count the Number of Vowels in a String
#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter String: ");
    gets(str);

    for(i=0; str[i] !='\0';i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        count++;
    }
    printf("Count the number of Vowel in a string is : %d",count);
}