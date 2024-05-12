#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[6] = { 0 };
	int len;
	while (1)
	{
		scanf("%s", s,6);
		if (s[0] == '0')
		{
			break;
		}
		len = strlen(s);
		for (int i = 0; i < len; i++)
		{
			if (s[len - 1 - i] != s[i])
			{
				printf("no\n");
				break;
			}
			if (s[len -1 - i] == s[i] && i == len - 1)
				printf("yes\n");
		}
	}

	return 0;
}