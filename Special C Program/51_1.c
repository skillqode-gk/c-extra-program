// Compute the Value of Euler's Number e. Use the Formula: e = 1 + 1/1! + 1/2! + …… 1/n!
#include <stdio.h>
int factorial(int n)
{
	int res = 1;
	for (int i=2; i<=n; i++)
	res *= i;
	return res;
}

double sum(int n)
{
	double sum = 1.0;
	for (int i = 1; i <= n; i++)
		sum += 1.0/factorial(i);
	return sum;
}

int main()
{
	int n ;
    printf("Enter number: ");
    scanf("%d",&n);
	printf("Eules's Series: %.4lf",sum(n));
	return 0;
}
