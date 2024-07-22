#include<string.h>
#include<stdio.h>
int main(void)
{
	int t, n, len;
	char str[82] = { 0 };
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d ", &n);
		fgets(str, 82, stdin);
		len = (int)strlen(str);

		for (int idx = 0; idx < len; idx++)
		{
			if (idx == n - 1)
				continue;
			else
				printf("%c", str[idx]);
		}
	}
}