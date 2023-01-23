// Merge Two Lists and Sort it
#include <stdio.h>
int main()
{
    int a[20], b[20], i;
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        a[i + 5] = b[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}