#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[1002] = { 0 }, str2[1002] = { 0 };
	int len1, len2, cnt = 0;

	fgets(str1, 1002, stdin);
	fgets(str2, 1002, stdin);

	len1 = (int)strlen(str1) - 1;
	len2 = (int)strlen(str2) - 1;

	for (int i = 0; i < len1; i++)
	{
		for (int idx = 0; idx < len2; idx++)
		{
			if (str2[idx] == '0')
			{
				continue;
			}
			if (str1[i] == str2[idx])
			{
				str1[i] = '0';
				str2[idx] = '0';
				break;
			}
		}
	}
	for (int i = 0; i < len1; i++)
	{
		if (str1[i] != '0')
			cnt++;
	}
	for (int i = 0; i < len2; i++)
	{
		if (str2[i] != '0')
			cnt++;
	}
	printf("%d", cnt);
}