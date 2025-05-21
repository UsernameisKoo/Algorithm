#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(void)
{
	int n, avg_n, sum = 0;

	scanf("%d", &n);
	vector<int> v(n);

	if (n == 0)
	{
		printf("0");
		return 0;
	}
	avg_n = round(15 * float(n) / 100);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end());

	for (int i = avg_n; i < n - avg_n; i++)
	{
		sum += v[i];
	}
	int avg = round(float(sum) / (n - avg_n * 2));
	printf("%d", avg);
}