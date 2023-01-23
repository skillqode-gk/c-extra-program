// C Program to Implement Linear Search using Recursion
#include<stdio.h>
#include<stdlib.h>
#define n 5
int i;
int linearSearch(int a[],int val, int i,int last)
{
    // int pos = 0;
    if(i >= last)
        return -1;
    else if(a[i] == val)
        return i+1;
    else
        return linearSearch(a,val,i+1,last);
    return -1;
}
int main()
{
    int a[n],pos,x;
    for ( i = 0; i < n; i++)
        a[i] = rand() %10+1;
    printf("Array Elements: ");
    for ( i = 0; i < n; i++)
        printf("%d ",a[i]);
    printf("\nEnter searching Element: ");
    scanf("%d",&x);
    pos = linearSearch(a,x,0,n);
    if(pos != -1)
        printf("Element is found at %d position.",pos);
    else
        printf("Element is not found.");
}