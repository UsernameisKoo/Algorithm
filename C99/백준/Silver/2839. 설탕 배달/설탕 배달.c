#include<stdio.h>
int main(void)
{
	int n,five,three = -1;
	scanf("%d", &n);
	five = n / 5;

	for (int i = five; i > five - 3; i--)
	{
		
		if ((n - i * 5) % 3 == 0)
		{
			three = (n - i * 5) / 3;
			five = i;
			break;
		}
		if (i == 0)
		{
			break;
		}
	}
	if (three == -1)
	{
		printf("-1");
	}
	else
	{
		printf("%d",three + five);
	}
	return 0;
}