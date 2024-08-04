#include<stdio.h>
int main(void)
{
	int n, i = 0, j = 0;
	
	char c;
	scanf("%d\n", &n);
	
	for (int t = 1; t <= n; t++)
	{
		char str[25][25] = { 0 };
		i = 0, j = 0;
		
		while(1)
		{
			scanf("%c", &c);
			if (c == '\n')
			{
				break;
			}
			if(c == ' ')
			{
				i++;
				j = 0;
				continue;
			}
			str[i][j] = c;
			j++;
		}
		printf("Case #%d: ", t);
		for (int x = i; x >= 0; x--)
		{
			printf("%s ", str[x]);
		}
		printf("\n");
	}
}