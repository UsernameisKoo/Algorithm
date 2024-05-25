#include<stdio.h>
int main(void)
{
	int n = 0, num = 0, top = -1, first_index = 0;
	int stack[10000] = { 0 };
	char str[6] = "";

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);

		if (str[1] == 'u')
		{
			scanf("%d", &num);
			top++;
			stack[top] = num;
		}
		else if (str[1] == 'o')
		{
			if (first_index > top)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", stack[first_index]);
				first_index++;
			}
			
		}
		else if (str[1] == 'i')
		{
			printf("%d\n", top - first_index  + 1);
		}
		else if (str[1] == 'm')
		{
			if (first_index > top)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (str[1] == 'r')
		{
			if (first_index > top)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",stack[first_index]);
			}
		}
		else if (str[1] == 'a')
		{
			if (first_index > top)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", stack[top]);
			}
		}
	}

	return 0;
}