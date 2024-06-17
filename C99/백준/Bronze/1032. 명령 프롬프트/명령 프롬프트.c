#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	char result[51] = "";
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char str[51] = "";
		if (i == 0)
		{
			scanf("%s", result);
		}
		else
		{
			scanf("%s", str);
			for (int x = 0; x < strlen(result); x++)
			{
				if (result[x] != str[x])
				{
					result[x] = '?';
				}
			}
		}
		
	}
	printf("%s", result);
}