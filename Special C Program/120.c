// Program to Determine Whether a Given Number is Even or Odd Recursively
#include <stdio.h>
int checkOddOREven(int no)
{
    if (no < 2)
        return (no % 2 == 0);
    return checkOddOREven(no - 2);
}

int main()
{
    int n, f = 0;
    printf("Enter the Number  :");
    scanf("%d", &n);
    f = checkOddOREven(n);
    if (f == 0)
        printf("\nThe number is odd");
    else
        printf("\nThe Number is even");
    return 0;
}