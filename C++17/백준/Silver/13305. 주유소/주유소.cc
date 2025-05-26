#include<stdio.h>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(void)
{
	int n, num;
	scanf("%d", &n);

	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d", &num);
		v1.push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		v2.push_back(num);
	}
	int price = v2[0];
	long long int sum = v2[0] * v1[0];

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