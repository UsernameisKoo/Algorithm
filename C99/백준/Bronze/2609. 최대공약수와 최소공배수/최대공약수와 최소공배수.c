#include<stdio.h>
int main(void)
{
	int m, n;
	int result;
	scanf("%d %d", &m, &n);

	result = m * n;

	for (int i = m; i >= 1; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	for (int i = 2; i <= m; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			result /= i;
			m /= i;
			n /= i;
			i = 1;
		}
	}
	printf("%d", result);


	return 0;
}