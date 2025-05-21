#include<stdio.h>
#include<algorithm>
using namespace std;
int pivot(int num[], int l, int h);
void quick(int num[], int l, int h);
int pivot(int num[], int l, int h)
{
	int pivot = num[h];
	int i = l - 1;
	for (int j = l; j <= h; j++)
	{
		if (num[j] < pivot)
		{
			i++;
			swap(num[i], num[j]);
		}
	}
	swap(num[i + 1], num[h]);
	return i + 1;
}
void quick(int num[], int l, int h)
{
	if (l <= h) {
		int p = pivot(num, l, h); // pivot 위치
		quick(num, l, p - 1);       // 왼쪽
		quick(num, p + 1, h);      // 오른쪽
	}
	return;
}
int main(void)
{
	int n, k;
	scanf("%d %d", &n, &k);

	int* num = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	quick(num, 0, n - 1);
	printf("%d", num[n - k]);
	return 0;
}