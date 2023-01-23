// Find the Largest Number in a List
#include<stdio.h>
int main()
{
    int a[10] = {1,12,15,45,20,0,48,95,2,3};
    int temp,i;
    temp = a[0];
    for(i=0;i<10;i++)
    {
        if(temp<a[i])
            temp = a[i];
    }
    printf("Largest number in a list is: %d",temp);
}