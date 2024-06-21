#include<stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int n = 0; n < t; n++)
	{
		int a, b;
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}