#include<stdio.h>
int main(void)
{
	long long a, b, max, min;
	long long mul;
	scanf("%lld %lld", &a, &b);
	if (a > b)
	{
		min = b;
		max = a;
	}
	else
	{
		min = a;
		max = b;
	}
	mul = max * min;

	for (int j = 2; j <= min; j++)
	{
		if (min % j == 0 && max % j == 0)
		{
			min /= j;
			max /= j;
			mul /= j;
			j = 1;
		}

	}
	printf("%lld\n", mul);


	return 0;
}