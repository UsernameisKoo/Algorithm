#include<stdio.h>
#include<stdlib.h>
char** array(int row, int col)
{
	char** x;

	x = malloc(row * sizeof(*x));

	for (int i = 0; i < row; i++)
	{
		x[i] = malloc(col * sizeof(**x));
	}

	return x;
}
int main(void)
{
	int r, c;
	char** str = NULL;

	int min = 2500, sum1 = 0, sum2 = 0;

	scanf("%d %d\n", &r, &c);

	str = array(r, c);

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			scanf("%c", &str[i][j]);
		}
		getchar();
	}

	

	for (int row = 0; row < r - 7; row++)
	{
		for (int col = 0; col < c - 7; col++)
		{
			for (int i = row; i < row + 8; i++)
			{
				for (int j = col; j < col + 8; j++)
				{
					if (j % 2 == 0 && i % 2 == 0)
					{
						if (str[i][j] == 'W')
						{
							sum2++;
						}
						if (str[i][j] == 'B')
						{
							sum1++;
						}
					}
					else if (j % 2 == 1 && i % 2 == 0)
					{
						if (str[i][j] == 'W')
						{
							sum1++;
						}
						if (str[i][j] == 'B')
						{
							sum2++;
						}
					}
					else if (j % 2 == 0 && i % 2 == 1)
					{
						if (str[i][j] == 'B')
						{
							sum2++;
						}
						if (str[i][j] == 'W')
						{
							sum1++;
						}
					}
					else
					{
						if (str[i][j] == 'B')
						{
							sum1++;
						}
						if (str[i][j] == 'W')
						{
							sum2++;
						}
					}
				}
			}
			if (sum1 < min)
			{
				min = sum1;
			}
			if (sum2 < min)
			{
				min = sum2;
			}
			sum1 = 0;
			sum2 = 0;
		}
	}

	printf("%d", min);

	for (int i = 0; i < r; i++)
	{
		free(str[i]);
	}
	free(str);
}