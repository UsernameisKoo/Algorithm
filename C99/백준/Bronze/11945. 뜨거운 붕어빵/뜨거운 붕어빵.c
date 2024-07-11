#include<stdio.h>
int main(void)
{
	int n, m;
	char num[10][11] = { {0} };

	scanf("%d %d\n", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			num[i][j] = getchar();
		}
		getchar();
		for (int j = m - 1; j >= 0; j--)
		{
			printf("%c", num[i][j]);
		}
		printf("\n");
	}

}