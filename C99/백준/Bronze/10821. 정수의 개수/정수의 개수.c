#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[102] = { 0 };
	int len, cnt = 0;

	fgets(str, 102, stdin);
	len = (int)strlen(str) - 1;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == ',')
			cnt++;
	}
	printf("%d", cnt + 1);
}