#include<stdio.h>
#include<string.h>
int main(void)
{
	int t, len, num;
	scanf("%d\n", &t);

	for (int i = 0; i < t; i++)
	{
		char str[1002] = { 0 };
		char alpha[26] = { 0 };

		num = 0;

		fgets(str, 1002, stdin);
		len = (int)strlen(str) - 1;

		for (int idx = 0; idx < len; idx++)
		{
			if (str[idx] >= 'A' && str[idx] <= 'Z')
			{
				alpha[str[idx] - 65] = 1;
			}
		}
		for (int idx = 0; idx < 26; idx++)
		{
			if (alpha[idx]!=1)
			{
				num += idx + 65;
			}
		}
		printf("%d\n", num);
	}
}