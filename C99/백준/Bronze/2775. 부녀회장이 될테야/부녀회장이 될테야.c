#include<stdio.h>
int people(int, int);
int main(void)
{
	int t;
	int k, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &k);
		scanf("%d", &n);

		printf("%d\n",people(k, n));
	}
}
int people(int floor, int room)
{
	int p = 0;

	if (floor == 1)
	{
		for (int i = 1; i <= room; i++)
		{
			p += i;
		}
		return p;
	}
	else
	{
		for (int i = 1; i <= room; i++)
		{
			p += people(floor - 1, i);
		}
		return p;
	}
}