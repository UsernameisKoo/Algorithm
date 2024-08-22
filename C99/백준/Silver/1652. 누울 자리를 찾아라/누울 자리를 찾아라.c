#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, cnt = 0, x = 0;
	char** str = NULL;

	//malloc
	scanf("%d", &n);

	
	str = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
	{
		str[i] = (char*)malloc(sizeof(char) * (n + 1));
	}
	if (str != NULL)
	{
		for (int i = 0; i < n; i++)
		{
			scanf(" %s", str[i]);
		}

		x = 0, cnt = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (str[i][j] != 'X')
				{
					x++;
				}
				else
				{
					if (x >= 2)
					{
						cnt++;
					}
					x = 0;
				}

				if (j == n - 1)
				{
					if (x >= 2)
					{
						cnt++;
					}
					x = 0;
				}
			}
		}
		printf("%d", cnt);

		x = 0, cnt = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (str[j][i] != 'X')
				{
					x++;
				}
				else
				{
					if (x >= 2)
					{
						cnt++;
					}
					x = 0;
				}

				if (j == n - 1)
				{
					if (x >= 2)
					{
						cnt++;
					}
					x = 0;
				}
			}
		}
		printf(" %d", cnt);
		//free
		for (int i = 0; i < n; i++)
		{
			free(str[i]);
		}
		free(str);
	}
	else
	{
		printf("error");
		return -1;
	}
	return 0;
}