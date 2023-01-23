// Average number of given list
#include<stdio.h>
void main()
{
    int a[5],i,sum=0,count=0;
    float avg;
    for(i=0;i<5;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
        count++;
    }
    avg = (float)sum / count;
    printf("\nSum of total numbers: %d",sum);
    printf("\nAverage of total numbers: %.2f",avg);
}