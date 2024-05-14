#include<stdio.h>
int main(void)
{
	int n, k;
	int result = 1;

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	for (int i = 1; i <= n - k; i++)
	{
		result /= i;
	}
	for (int i = 1; i <= k; i++)
	{
		result /= i;
	}
	printf("%d", result);

	return 0;
}