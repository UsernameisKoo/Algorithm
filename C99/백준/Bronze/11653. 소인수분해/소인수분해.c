#include<stdio.h>


int main(void)
{
	int n,n1;
	scanf("%d", &n);
	n1 = n;
	for (int i = 2; i <= n; i++)
	{
		if (n1 % i == 0)
		{
			printf("%d\n", i);
			n1 /= i;
			i = 1;
		}
	}

	return 0;
}