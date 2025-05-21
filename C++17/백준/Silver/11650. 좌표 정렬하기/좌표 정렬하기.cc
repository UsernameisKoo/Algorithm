#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int n;

void radix_sort(vector<pair<int, int>>& v)
{
	vector<pair<int, int>> output(n);
	int count[200001] = { 0, };

	for (int i = 0; i < n; i++)
	{
		count[v[i].second + 100000]++;
	}
	for (int i = 1; i < 200001; i++)
	{
		count[i] += count[i-1];
	}

	// 안정 정렬 (뒤에서부터)
	for (int i = n - 1; i >= 0; i--)
	{
		output[--count[v[i].second + 100000]] = v[i];
	}
	v = output;

	fill(count, count + 200001, 0);
	for (int i = 0; i < n; i++)
	{
		count[v[i].first + 100000]++;
	}
	for (int i = 1; i < 200001; i++)
	{
		count[i] += count[i-1];
	}

	// 안정 정렬 (뒤에서부터)
	for (int i = n - 1; i >= 0; i--) {
		output[--count[v[i].first + 100000]] = v[i];
	}
	v = output;
}

int main(void)
{
	scanf("%d", &n);

	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &v[i].first, &v[i].second);
	}
	radix_sort(v);
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", v[i].first, v[i].second);
	}
}