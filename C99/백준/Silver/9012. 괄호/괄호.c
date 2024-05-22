#include<stdio.h>
#include<string.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int j = 0; j < t; j++)
	{
		char stack[51] = "";
		char str[51] = "";
		int top = 0, result = 1;

		scanf("%s", str);
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == '(')
			{
				stack[top++] = str[i];
			}
			if (str[i] == ')' && top == 0)
			{
				result = 0;
			}
			if (str[i] == ')' && top > 0)
			{
				top--;
			}
			
		}
		if(result == 1 && top == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}