#include<stdio.h>
int main(void)
{
	int n, x, y;
	int min_x = -10000, min_y = -10000, max_x = 10000, max_y = 10000;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x >= min_x)
		{
			min_x = x;
		}
		if (y >= min_y)
		{
			min_y = y;
		}

		if (x <= max_x)
		{
			max_x = x;
		}
		if (y <= max_y)
		{
			max_y = y;
		}
	}

	printf("%d", (max_x - min_x) * (max_y - min_y));

	return 0;
}