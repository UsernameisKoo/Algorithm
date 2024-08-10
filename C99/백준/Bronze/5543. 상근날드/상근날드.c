#include<stdio.h>
int main(void)
{
	int n, num, result;
	int min1 = 2000, min2 = 2000;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &n);
		if (n <= min1)
		{
			min1 = n;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &num);
		if (num <= min2)
		{
			min2 = num;
		}
	}
	result = min1 + min2 - 50;
	printf("%d", result);
}