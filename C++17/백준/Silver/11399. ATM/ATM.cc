#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, num, time = 0;
	scanf("%d", &n);

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		time += v[i] * (n - i);
	}
	printf("%d", time);
}