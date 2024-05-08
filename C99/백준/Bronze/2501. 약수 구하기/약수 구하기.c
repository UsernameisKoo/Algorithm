#include<stdio.h>
int main(void)
{
	int n, k;
	int num = 0, i = 1;
	scanf("%d %d", &n, &k);
	
	if (n % 2 == 0)
	{
		for (i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				num++;
			}
			if (k == num)
			{
				
				break;
			}
		}
	}
	if (n % 2 != 0)
	{
		for (i = 1; i <= n / 2; i+=2)
		{
			if (n % i == 0)
			{
				num++;
			}
			if (k == num)
			{
				break;
			}
		}
	}
	
	if (num + 1 == k)
	{
		printf("%d",n);
	}
	else if (num < k)
	{
		printf("0");
	}
	else
	{
		printf("%d", i);
	}
	
}