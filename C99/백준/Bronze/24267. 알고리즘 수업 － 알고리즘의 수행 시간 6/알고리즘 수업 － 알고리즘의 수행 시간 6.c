#include<stdio.h>
int main(void)
{
	long long n;
	long long result;

	scanf("%lld", &n);

	result = (n - 2) * (n * n - n) / 2 + (-2 * n + 1) * (n - 2) * (n - 1) / 4 + (n - 2) * (n - 1) * (2 * n - 3) / 12;

	printf("%lld\n", result);
	printf("3");
}