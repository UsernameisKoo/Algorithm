#include<stdio.h>
int main(void)
{
	int n, a;
	long long max = 0, min = 1000001;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (max <= a)
			max = a;
		if (min >= a)
			min = a;
	}
	printf("%lld", max * min);

	return 0;
}