#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, m, sum = 0, num;
	int n_i, n_j;
	scanf("%d %d", &n, &m);

	vector<int> v;
	v.push_back(sum);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		sum += num;
		v.push_back(sum);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &n_i, &n_j);
		printf("%d\n", v[n_j] - v[n_i - 1]);
	}
}