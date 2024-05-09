#include<stdio.h>
int main(void)
{
	int t, a, b, max, min;
	int mul;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			min = b;
			max = a;
		}
		else
		{
			min = a;
			max = b;
		}
		mul = max * min;

		for (int j = 2; j <= min; j++)
		{
			if (min % j == 0 && max % j == 0)
			{
				min /= j;
				max /= j;
				mul /= j;
				j = 1;
			}
			
		}
		printf("%d\n", mul);
	}

	return 0;
}