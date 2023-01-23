// Find the LCM of Two Numbers Using Recursion
#include<stdio.h>
int lcm(int a, int b)
{
    static int common=1;
    if(common %a == 0 && common %b == 0)
    {
        return common;
    }
    common++;
    lcm(a,b);
}
int main()
{
    int n1,n2,a;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);

    a = lcm(n1,n2);
    printf("LCM of two number is: %d",a);
}