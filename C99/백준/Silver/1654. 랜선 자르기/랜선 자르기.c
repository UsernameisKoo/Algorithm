#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int k, n, cnt = 0;
	long long max = 0, min = 0;
	long long left = 1, mid = 0, right = 0, max_mid = 0;
	long long* l = NULL;
	scanf("%d %d\n", &k, &n);

	l = (long long*)calloc(k, sizeof(long long));
	for (int i = 0; i < k; i++)
	{
		scanf(" %lld", &l[i]);
		if (l[i] > max)
		{
			max = l[i];
		}
	}
	right = max;
	while (left<=right)
	{
		cnt = 0;
		mid = (left + right) / 2;

		for (int i = 0; i < k; i++)
		{
			cnt += l[i] / mid;
		}
		if (cnt >= n && max_mid <= mid)
		{
			max_mid = mid;
		}
		if (cnt >= n)
		{
			left = mid + 1;
		}
		else if(cnt < n)
		{
			right = mid - 1;
		}
	}
	printf("%lld", max_mid);
	
	free(l);
}