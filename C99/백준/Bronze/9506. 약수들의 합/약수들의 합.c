#include<stdio.h>
int main(void)
{
	int n, sum;
	while(1)
	{
		scanf("%d", &n);
		if (n == -1)
		{
			break;
		}
		sum = 0;
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				sum += i;
			}
		}
		if (sum == n)
		{
			printf("%d = ", n);
			for (int i = 1; i <= n / 2; i++)
			{
				if (n % i == 0 && i <= n / 2 - 1)
				{
					printf("%d + ", i);
				}
				if(n % i == 0 && i > n / 2 - 1)
				{
					printf("%d\n", i);
				}
			}
		}
		else
		{
			printf("%d is NOT perfect.\n", n);
		}
	}
	
	return 0;
}