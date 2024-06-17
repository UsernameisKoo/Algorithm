#include<stdio.h>
int main(void)
{
	int n, t, p, sum = 0;
	int size[6] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &size[i]);
	}
	scanf("%d %d", &t, &p);
	for (int i = 0; i < 6; i++)
	{
		if (size[i] != 0)
		{
			size[i]--;
			sum += (size[i] / t + 1);
		}
	}
	printf("%d\n", sum);
	printf("%d %d", n / p, n % p);

}