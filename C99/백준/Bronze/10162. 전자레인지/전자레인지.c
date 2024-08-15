#include<stdio.h>
int main(void)
{
	int t;
	int a = 300, b = 60, c = 10;
	scanf("%d", &t);

	if (t % 10 != 0)
	{
		printf("-1");
		return 0;
	}

	printf("%d ", t / a);
	t = t % a;

	printf("%d ", t / b);
	t = t % b;

	printf("%d", t / c);
}