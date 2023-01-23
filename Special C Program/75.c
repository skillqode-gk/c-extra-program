// Swap the First and Last Value of a List
#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50};
    int i,temp,count=0;
    printf("Before swapping element\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
        count++;
    }
    //printf("\ncount: %d",count);
    temp = a[0];
    a[0] = a[count-1];
    a[count-1] = temp;
    
    printf("\nAfter swapping element\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
        
    }
}