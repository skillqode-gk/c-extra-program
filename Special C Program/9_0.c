// Three digits and print all possible combinations from the digit.
#include <stdio.h>
int main()
{
    int i, j, k;
    int a[3] = {1,2,3};
    /*printf("Enter the first number : ");
    scanf("%d", &a[0]);
    printf("Enter the second number : ");
    scanf("%d", &a[1]);
    printf("Enter the third number : ");
    scanf("%d", &a[2]); */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                if (i != j && j != k && k != i)
                   printf("%d %d %d\n", a[i], a[j], a[k]);
            }
        }
    }
}