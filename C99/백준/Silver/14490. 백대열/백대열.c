#include<stdio.h>
int gcd(int n, int m)
{
	if (n == 0)
	{
		return m;
	}
	else if (m == 0)
	{
		return n;
	}
	else
	{
		return gcd(m, n % m);
	}
}
int main(void)
{
	int n, m, x;
	scanf("%d:%d", &n, &m);

	x = gcd(n, m);
	printf("%d:%d", n / x, m / x);
}