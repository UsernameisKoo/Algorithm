#include<stdio.h>
int main(void)
{
	int f0[41] = { 1, 0 };
	int f1[41] = { 0 , 1, 0 };
	int t, n;

	for (int i = 2; i <= 40; i++)
	{
		f0[i] = f0[i - 2] + f0[i - 1];
		f1[i] = f1[i - 2] + f1[i - 1];
	}

	scanf("%d", &t);
	for (int num = 0; num < t; num++)
	{
		scanf("%d", &n);
		printf("%d %d\n", f0[n], f1[n]);
	}
}