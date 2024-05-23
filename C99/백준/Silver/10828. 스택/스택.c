#include<stdio.h>
int main(void)
{
	int n = 0, top = -1,num = 0;
	int stack[10000] = { 0 };
	char str[11] = "";

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		num = 0;
		scanf("%s", str);
		if (str[1] == 'u')
		{
			scanf("%d", &num);
			top++;
			stack[top] = num;
		}
		else if (str[0] == 'p' && str[1] == 'o')
		{
			if (top >= 0)
			{
				printf("%d\n", stack[top]);
				top--;
			}
			else
			{
				printf("-1\n");
			}
			
		}
		else if (str[1] == 'i')
		{
			printf("%d\n", top+1);
		}
		else if (str[1] == 'm')
		{
			if (top == -1)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (str[0] == 't' && str[1] == 'o')
		{
			if (top == -1)
			{
				printf("%d\n", top);
			}
			else
			{
				printf("%d\n", stack[top]);
			}
		}
	}
	return 0;
}