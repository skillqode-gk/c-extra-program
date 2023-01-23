// Print the Pascal's triangle for n number of rows given by the user
#include <stdio.h>
long fun(int y)
{
    int z;
    long result = 1;

    for( z = 1 ; z <= y ; z++ )
        result = result*z;

    return result;
}
int main()
{
    int i, j, n;
    printf("Enter number of rows in Pascal's triangle: ");
    scanf("%d",&n);
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j <= ( n - i - 2 ) ; j++ )
            printf(" ");
        for( j = 0 ; j <= i ; j++ )
            printf("%ld ",fun(i)/(fun(j)*fun(i-j)));

        printf("\n");
    }
    return 0;
}