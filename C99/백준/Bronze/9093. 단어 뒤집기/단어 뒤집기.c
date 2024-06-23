#include<stdio.h>
int main(void)
{
	char c;
	char str[21] = { 0 };
	int t, index;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		if(i==0)
			getchar();
		index = 0;
		
		do
		{
			c = getchar();
			if (c == ' ' || c=='\n')
			{
				for (int idx = index - 1; idx >= 0; idx--)
				{
					printf("%c", str[idx]);
				}
				printf(" ");
				index = 0;
			}
			else
				str[index++] = c;
		} while (c != '\n');
		printf("\n");
		
		
	}

	return 0;
}