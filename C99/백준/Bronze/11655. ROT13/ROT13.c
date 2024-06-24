#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[102] = { 0 };
	int len;

	fgets(str, 102, stdin);

	len = strlen(str) - 1;

	for (int i = 0; i < len; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (str[i] + 13 > 'z')
				str[i] -= 'z' - 'a' - 12;
			else
				str[i] += 13;
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
		{
			if (str[i] + 13 > 'Z')
				str[i] -= 'Z' - 'A' - 12;
			else
				str[i] += 13;
		}
	}
	printf("%s", str);

	return 0;
}