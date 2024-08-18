#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void rec(char* str, int N, int n)
{
	if (N-n <= 3)
	{
		for (int i = n + (N-n) / 3; i < n + (N-n) / 3 * 2; i++)
		{
			str[i] = ' ';
		}
	}
	else
	{
		for (int i = n + (N-n)/3; i < n + (N-n) / 3 * 2; i++)
		{
			str[i] = ' ';
		}
		rec(str, N, n + (N-n)/3 * 2);
		rec(str, n+(N-n)/3, n);
	}
}
int main(void)
{
	int n;
	char* str = NULL;
	while (scanf("%d", &n) != EOF)
	{
		str = (char*)malloc(sizeof(char) * ((int)pow(3, n) + 1));

		if (str != NULL)
		{
			for (int i = 0; i < (int)pow(3, n); i++)
			{
				str[i] = '-';
			}
			str[(int)pow(3, n)] = '\0';
			rec(str, (int)pow(3, n), 0);

			printf("%s\n", str);

			free(str);
		}
		else
		{
			printf("error\n");
			return -1;
		}
		
	}
	
	return 0;
}