#include<stdio.h>
int num[20000001];

int main(void)
{
	int n, m;
	int number;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &number);

		num[number + 10000000]++;
	}

	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &number);
		printf("%d ", num[number + 10000000]);
	}
}