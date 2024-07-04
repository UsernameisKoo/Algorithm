#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char n1[7] = { 0 }, n2[7] = { 0 };
	int len1, len2, max, min;
	scanf("%s %s", n1, n2);

	len1 = (int)strlen(n1);
	len2 = (int)strlen(n2);

	for (int i = 0; i < len1; i++)
	{
		if (n1[i] == '5')
		{
			n1[i] = '6';
		}
	}
	for (int i = 0; i < len2; i++)
	{
		if (n2[i] == '5')
		{
			n2[i] = '6';
		}
	}
	max = atoi(n1) + atoi(n2);

	for (int i = 0; i < len1; i++)
	{
		if (n1[i] == '6')
		{
			n1[i] = '5';
		}
	}
	for (int i = 0; i < len2; i++)
	{
		if (n2[i] == '6')
		{
			n2[i] = '5';
		}
	}
	min = atoi(n1) + atoi(n2);

	printf("%d %d", min, max);
}