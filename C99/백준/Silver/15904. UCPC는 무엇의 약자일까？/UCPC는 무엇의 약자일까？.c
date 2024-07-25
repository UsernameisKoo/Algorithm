#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[1002] = { 0 };
	int len, cnt = 0, index = 0;

	fgets(str, 1002, stdin);
	len = (int)strlen(str) - 1;

	for (int i = index; i < len; i++)
	{
		if (str[i] == 'U')
		{
			index = i + 1;
			cnt++;
			break;
		}
	}
	for (int i = index; i < len; i++)
	{
		if (str[i] == 'C')
		{
			index = i + 1;
			cnt++;
			break;
		}
	}
	for (int i = index; i < len; i++)
	{
		if (str[i] == 'P')
		{
			index = i + 1;
			cnt++;
			break;
		}
	}
	for (int i = index; i < len; i++)
	{
		if (str[i] == 'C')
		{
			index = i + 1;
			cnt++;
			break;
		}
	}
	if (cnt == 4)
	{
		printf("I love UCPC");
	}
	else
	{
		printf("I hate UCPC");
	}
	return 0;
}