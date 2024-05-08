#include<stdio.h>
int main(void)
{
	int a, b, v, n;
	int day = 1;
	scanf("%d %d %d", &a, &b, &v);

	if (a <= v)
	{
		n = a - b;
		v -= a;

		if (v % n != 0)
		{
			day += v / n + 1;
		}
		if (v % n == 0)
		{
			day += v / n;
		}
	}
	

	printf("%d", day);

	return 0;
}