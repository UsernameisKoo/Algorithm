#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	int len;
	char str[22] = { 0 };

	scanf("%d\n", &n);

	for (int i = 0; i < n; i++)
	{
		fgets(str, 22, stdin);

		len = (int)strlen(str) - 1;
		for (int i = 0; i < len; i++)
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
			{
				str[i] += 'a' - 'A';
			}
		}
		printf("%s", str);
	}

	return 0;
}