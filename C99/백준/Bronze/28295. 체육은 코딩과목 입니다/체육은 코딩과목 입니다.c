#include<stdio.h>
int main(void)
{
	int n;
	int now = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		if (n == 1)
		{
			now++;
		}
		if (n == 2)
		{
			now += 2;
		}
		if (n == 3)
		{
			now -= 1;
		}
	}
	if (now < 0)
	{
		now += 12;
	}
	switch (now%4)
	{
	case(0): printf("N"); break;
	case(1): printf("E"); break;
	case(2): printf("S"); break;
	default: printf("W"); break;
	}
}