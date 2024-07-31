#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char str[10] = { 0 };
	int len, sum1 = 0, sum2 = 0;


	fgets(str, 10, stdin);
	len = (int)strlen(str) - 1;
	len /= 2;

	for (int i = 0; i < len; i++)
	{
		sum1 += str[i] - '0';
	}
	for (int i = len; i < len * 2; i++)
	{
		sum2 += str[i] - '0';
	}

	if (sum1 == sum2)
	{
		printf("LUCKY");
	}
	else
	{
		printf("READY");
	}
}