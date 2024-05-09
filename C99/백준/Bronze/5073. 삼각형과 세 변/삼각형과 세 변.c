#include<stdio.h>
int main(void)
{
	int r[3];
	int max;
	while (1)
	{
		max = 0;
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &r[i]);

			if (max <= r[i])
			{
				max = r[i];
			}
		}
		if (!r[0] && !r[1] && !r[2])
		{
			break;
		}

		if (max >= (r[0] + r[1] + r[2] - max)) {
			printf("Invalid\n");
		}
		else if (r[0] == r[1] && r[0] == r[2] && r[1] == r[2])
		{
			printf("Equilateral\n");
		}
		else if (r[0] != r[1] && r[0] != r[2] && r[1] != r[2])
		{
			printf("Scalene\n");
		}
		else
		{
			printf("Isosceles\n");
		}
	}
	

	return 0;
}