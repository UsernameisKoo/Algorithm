#include<stdio.h>
#include<string.h>
int main(void)
{
	char now = '\0';
	char str[52] = { 0 };
	int len, sum = 0;

	fgets(str, 52, stdin);

	len = (int)strlen(str) - 1;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == now)
		{
			sum += 5;
		}
		else
		{
			sum += 10;
		}
		now = str[i];
	}
	printf("%d", sum);
}