#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[12] = { 0 };
	int num[5] = { 0 };
	int len, cnt = 0;
	for (int n = 1; n <= 5; n++)
	{
		fgets(str, 12, stdin);
		len = (int)strlen(str) - 1;

		for (int i = 0; i < len - 2; i++)
		{
			if (str[i] == 'F' && str[i + 1] == 'B' && str[i + 2] == 'I')
			{
				num[cnt] = n;
				cnt++;
				break;
			}
		}
	}
	if (cnt == 0)
	{
		printf("HE GOT AWAY!");
	}
	else
	{
		for (int i = 0;; i++)
		{
			if (num[i] == 0)
				break;
			else
				printf("%d ", num[i]);
		}
	}
	return 0;
}