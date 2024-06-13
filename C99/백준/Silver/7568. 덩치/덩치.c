#include<stdio.h>
int main(void)
{
	int n;
	int num[50][2] = { 0 };
	int cnt[50] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &num[i][0], &num[i][1]);
	}

	for (int p = 0; p < n; p++)
	{
		for (int i = 0; i < n; i++)
		{
			if (num[p][0] < num[i][0] && num[p][1] < num[i][1])
				cnt[p]++;
		}
	}

	for (int p = 0; p < n; p++)
	{
		printf("%d ", cnt[p] + 1);
	}
}