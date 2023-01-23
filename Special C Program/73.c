 // Generate Random Numbers from 1 to 20 and Append Them to the List
 #include<stdio.h>
 #include <stdlib.h>
 void Random(int a, int b, int c)
 {
    int i,num;
    for(i=0;i<c;i++)
    {
        num = (rand() % (b - a + 1)) + a;
        printf("%d ",num); 
    }
 }
 int main()
 {
    int lower,upper, count;
    printf("Enter lower limit: ");
    scanf("%d",&lower);
    printf("Enter upper limit: ");
    scanf("%d",&upper);
    printf("Enter number: ");
    scanf("%d",&count);

    Random(lower,upper,count);
 }