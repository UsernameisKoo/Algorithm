#include<stdio.h>
#include<string.h>
char str[1000002];
int main(void)
{
	int len;
	fgets(str, 1000002, stdin);
	len = (int)strlen(str) - 1;
	str[len] = '\0';
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
	}
	printf("%s", str);
}