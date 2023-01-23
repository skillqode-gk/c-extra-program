// Program to Compute a Polynomial Equation given that the Coefficients of the Polynomial are stored in a List
// F(x) = anxn + an-1xn-1 + an-2xn-2 + …….. + a1x +a0 = 0
// 2x3 - 6x2 + 2x - 1

#include <stdio.h>
#include <math.h>
int main()
{
    int i, t, x;
    int poly[] = {2, 5};
    float res = 0, sum = 1, mul = 1;
    int n = (int)sizeof(poly) / (int)sizeof(poly[0]);

    printf("Enter the X value  : ");
    scanf("%d", &x);

    t = n;
    for (i = 0; i < n; i++, t--)
    {
        sum = (float)poly[i];
        mul = 1;
        for (int j = t - 1; j > 0; j--)
        {
            mul *= x;
        }
        res = res + (sum * mul);
    }
    printf("\n Ans : %.2f", res);
}
