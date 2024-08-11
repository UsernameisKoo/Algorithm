#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char a[7] = {0}, b[7] = {0};
	char op[3] = { 0 };
	int i = 1;

	while (1)
	{
		scanf(" %s %s %s", a, op, b);
		if (op[0] == 'E')
			break;

		if (strcmp(op,">")==0 )
		{
			if (atoi(a) > atoi(b))
			{
				printf("Case %d: true\n", i);
			}
			else
			{
				printf("Case %d: false\n", i);
			}
		}
		else if (strcmp(op, ">=") == 0)
		{
			if (atoi(a) >= atoi(b))
			{
				printf("Case %d: true\n", i);
			}
			else
			{
				printf("Case %d: false\n", i);
			}
		}
		else if (strcmp(op, "<") == 0)
		{
			if (atoi(a) < atoi(b))
			{
				printf("Case %d: true\n", i);
			}
			else
			{
				printf("Case %d: false\n", i);
			}
		}
		else if (strcmp(op, "<=") == 0)
		{
			if (atoi(a) <= atoi(b))
			{
				printf("Case %d: true\n", i);
			}
			else
			{
				printf("Case %d: false\n", i);
			}
		}
		else if (strcmp(op, "==") == 0)
		{
			if (atoi(a) == atoi(b))
			{
				printf("Case %d: true\n", i);
			}
			else
			{
				printf("Case %d: false\n", i);
			}
		}
		else if (strcmp(op, "!=") == 0)
		{
			if (atoi(a) != atoi(b))
			{
				printf("Case %d: true\n", i);
			}
			else
			{
				printf("Case %d: false\n", i);
			}
		}
		i++;
	}
}