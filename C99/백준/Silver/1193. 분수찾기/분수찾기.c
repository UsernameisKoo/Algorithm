#include<stdio.h>
int main(void)
{
	int x, i = 1;
	scanf("%d", &x);
	while (1)
	{
		if (x >= i )
		{
			x -= i;
			i++;
		}
		else
			break;
	}
	if (x == 0 && i % 2 != 0)
	{
		printf("%d/1", i-1);
	}
	else if (x == 0 && i % 2 == 0)
	{
		printf("1/%d", i-1);
	}
	else if (x != 0 && i % 2 == 0)
	{
		printf("%d/%d", x, (i + 1 - x));
	}
	else
	{
		printf("%d/%d", (i + 1 - x), x);
	}
	return 0;
}