// Print Numbers in a Range (1,upper) Without Using any Loops
#include <stdio.h>
int main()
{
    static int i = 1;
lable:
    if (i <= 10)
    {
        printf("%d ", i++);
        goto lable;
    }
}