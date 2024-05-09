#include<stdio.h>
int main(void)
{
	int r[3], max = 0,sum = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &r[i]);
		if (max <= r[i])
		{
			max = r[i];
		}
		sum += r[i];
	}
	if (max < (sum - max))
	{
		printf("%d", sum);
	}
	else
	{
		int temp_max;
		temp_max = max;
		max = sum - max - 1;
		sum = sum - temp_max + max;
		printf("%d", sum);
	}

	return 0;
}