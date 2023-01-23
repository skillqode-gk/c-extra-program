// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main()
{
    int seconds,hh,mm,ss;
    printf("Enter Time(Seconds): ");
    scanf("%d",&seconds);
    hh = seconds/3600;
    mm = (seconds - (hh*3600))/60;
    ss = seconds - (mm*60) - (hh*3600);
    printf("Hours: %d",hh);
    printf("\nMinutes: %d",mm);
    printf("\nSeconds: %d",ss);
}