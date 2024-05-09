#include<stdio.h>
int main(void)
{
	int a1, a2, b1, b2;
	int x, y, max, min;

	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);
	y = b1 * b2;
	x = a1 * b2 + a2 * b1;

	if (x > y)
	{
		max = x;
		min = y;
	}
	else
	{
		max = y;
		min = x;
	}

	for (int i = 2; i <= min; i++)
	{
		if (min % i == 0 && max % i == 0)
		{
			min /= i;
			max /= i;
			i = 1;
		}
	}

	if (x > y)
	{
		printf("%d %d", max, min);
	}
	else
	{
		printf("%d %d", min, max);
	}
	

	return 0;
}