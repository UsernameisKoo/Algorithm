#include<stdio.h>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(void)
{
	int n;
	long long num;
	scanf("%d", &n);

	vector<long long> v1;
	vector<long long> v2;
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%lld", &num);
		v1.push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		v2.push_back(num);
	}
	long long price = v2[0];
	long long sum = v2[0] * v1[0];
	for (int i = 1; i < n - 1; i++)
	{
		if (v2[i] > price)
		{
			sum += price * v1[i];
		}
		else
		{
			price = v2[i];
			sum += price * v1[i];
		}
	}
	printf("%lld",sum);
}