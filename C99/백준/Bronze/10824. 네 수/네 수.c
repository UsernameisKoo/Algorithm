#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char str1[2][15] = { 0 };
	char str2[2][15] = { 0 };
	long long a, b, sum;
	int len1, len2;

	for (int i = 0; i < 2; i++)
	{
		scanf("%s", str1[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%s", str2[i]);
	}
	len1 = (int)strlen(str1[0]);
	len2 = (int)strlen(str2[0]);

	for (int i = len1,idx=0; ; i++, idx++)
	{
		str1[0][i] = str1[1][idx];
		if (str1[1][idx] == '\0')
		{
			break;
		}
	}
	for (int i = len2, idx = 0; ; i++, idx++)
	{
		str2[0][i] = str2[1][idx];
		if (str2[1][idx] == '\0')
		{
			break;
		}
	}
	a = atoll(str1[0]);
	b = atoll(str2[0]);
	sum = a + b;

	printf("%lld", sum);

	return 0;

}