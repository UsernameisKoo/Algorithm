#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[1001] = { 0 };
	int len;
	scanf("%s", str);

	len = (int)strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'D')
			str[i] -= 3;
		else
			str[i] -= 'A' - 'X';
	}
	printf("%s", str);
}