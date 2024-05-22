#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[102] = "";
	char stack[102] = "";

	int top = -1,result = 1;


	while (1)
	{
		fgets(str,102,stdin);
		if (str[0] == '.')
		{
			break;
		}
		result = 1;
		top = -1;
		for (int i = 0; i < strlen(str); i++)
		{
			

			if (str[i] == '(')
			{
				top++;
				stack[top] = str[i];
			}
			else if (str[i] == ')' && top >= 0)
			{
				if (stack[top] == '[')
				{
					result = 0;
				}
				else
				{
					top--;
				}
			}
			else if (str[i] == ')' && top == -1)
			{
				result = 0;
			}
			else if (str[i] == '[')
			{
				top++;
				stack[top] = str[i];
			}
			else if (str[i] == ']' && top >= 0)
			{
				if (stack[top] == '(')
				{
					result = 0;
				}
				else
				{
					top--;
				}
				
			}
			else if (str[i] == ']' && top == -1)
			{
				result = 0;
			}

		}
		if (top == -1 && result == 1)
		{
			printf("yes\n");
			continue;
		}
		else
		{
			printf("no\n");
			continue;
		}
		
	}
	

	return 0;
}