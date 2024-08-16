#include<stdio.h>
#include<stdlib.h>
int gcd(int x, int y)
{
	if (x == 0)
	{
		return y;
	}
	else if (y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y, x % y);
	}
}
int array(int num[], int n)
{
	if (n > 2)
	{
		num[n - 2] = gcd(num[n - 2], num[n - 1]);
		return array(num, n - 1);
	}
	else
	{
		return gcd(num[n - 2], num[n - 1]);
	}
}
int main(void)
{
	int n, first, last, my;
	int now, past;
	int* num = NULL;

	scanf("%d", &n);

	num = (int*)malloc(sizeof(int) * (n-1));

	if (num != NULL)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &now);
			if (i > 0)
			{
				num[i-1] = now - past;
				past = now;
			}
			else
			{
				first = now;
				past = now;
			}
		}
		last = now;

		my = array(num, n - 1);

		printf("%d", ((last - first) / my) - n + 1);

		free(num);
		return 0;
	}
	else
	{
		printf("error");
		return -1;
	}
	
}