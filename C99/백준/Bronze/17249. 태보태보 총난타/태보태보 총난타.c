#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[1002] = { 0 };
	int len, smile = 0, left = 0, right = 0;

	fgets(str, 1002, stdin);
	len = (int)strlen(str) - 1;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '@' && smile == 0)
		{
			left++;
		}

		else if (str[i] == '@' && smile == 1)
		{
			right++;
		}

		if (str[i] == '(' && str[i + 1] == '^' && str[i + 2] == '0' && str[i + 3] == '^' && str[i + 4] == ')')
		{
			smile = 1;
		}

		
	}
	printf("%d %d", left, right);
}