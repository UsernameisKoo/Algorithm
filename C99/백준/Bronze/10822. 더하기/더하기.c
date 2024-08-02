#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char str[102] = { 0 };
	int len, num = 0, sum = 0, num_len = 0;

	fgets(str, 102, stdin);
	len = (int)strlen(str) - 1;
	str[len] = '\0';

	for (int i = 0; i <= len; i++)
	{
		if (str[i] == ',')
		{
			str[i] = '\0';
			
		}
		if (str[i] == '\0')
		{
			sum += atoi(&str[num_len]);
			num_len = i + 1;
		}
	}
	printf("%d", sum);
}