#include<stdio.h>
int main(void)
{
	int n[9][9],max = 0, row, col;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &n[i][j]);
			if (max <= n[i][j])
			{
				max = n[i][j];
				row = i;
				col = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", row + 1, col + 1);

	return 0;

}