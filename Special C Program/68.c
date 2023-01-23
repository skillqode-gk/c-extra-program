// Program to Find the Union of two Lists

#include <stdio.h>
int main()
{
    int no1[100], no2[100], n1, n2;
    int merge[200], s;

    printf("Enter the 1st array size :");
    scanf("%d", &n1);
    printf("Enter the 2nd array size :");
    scanf("%d", &n2);

    printf("\nEnter %d integers: \n", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &no1[i]);
        merge[i] = no1[i];
    }
    s = n1;
    printf("\nEnter %d integers: %d\n", n2, s);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &no2[i]);
        merge[s] = no2[i];
        s++;
    }

    printf("\n Union of two lists :\n ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}