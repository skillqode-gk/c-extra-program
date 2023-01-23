// Count Set Bits in a Number
#include <stdio.h>

int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count = count + (n & 1);
        n >>= 1;
    }
    return count;
}

int main()
{
    int i = 15;
    printf("%d", countSetBits(i));
    return 0;
}