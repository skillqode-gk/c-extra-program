// Convert Gray Code to Binary
#include<stdio.h>
#include<string.h>
int main()
{
    string gray, bin;
    printf("Enter Gray number: ");
    scanf("%s",gray);
    bin = gray[0];
    for(int i=0;i< gray.length()-1;i++)
    {
        if(bin[i] == gray[i+1])
            bin = bin + "0";
        else
            bin = bin + "1";
    }
    printf("BInary number is %s",bin);
}