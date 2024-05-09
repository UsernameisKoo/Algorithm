#include<stdio.h>
long long fact(int);
int main(void)
{
	int n;
	long long f;
	scanf("%d", &n);

	f = fact(n);
	printf("%lld", f);

	return 0;

}
long long fact(int x)
{
	if (x > 0)
	{
		return x* fact(x - 1);
	}
	return 1;
}