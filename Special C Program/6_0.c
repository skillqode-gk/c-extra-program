// take in 5 subjects marks and display grade.
#include<stdio.h>
int main()
{
    int m,s,e,g,c;
    float total,per;
    printf("Enter maths marks: ");
    scanf("%d",&m);
    printf("Enter Science marks: ");
    scanf("%d",&s);
    printf("Enter English marks: ");
    scanf("%d",&e);
    printf("Enter Gujarati marks: ");
    scanf("%d",&g);
    printf("Enter Computer marks: ");
    scanf("%d",&c);

    total = m+s+e+g+c;
    per = total /5;
    printf("\nMaths\tScience\tEnglish\tGujarati\tComputer\tTotal\tPer\tGarde");
    printf("\n%d\t%d\t%d\t%d\t%d\t%.2f\t%.2f\t",m,s,e,g,c,total,per);
    if(m<35 || s<35 || e<35 || g<35 || c<35)
    printf("\tFail");
    else if(per>=85)
    printf("\t A");
    else if(per>=70)
    printf("\t B");
    else if(per>=55)
    printf("\t C");
    else if(per>=35)
    printf("\t D");
}