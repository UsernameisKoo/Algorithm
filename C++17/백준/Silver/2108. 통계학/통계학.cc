#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(void)
{
	int sum = 0, num, max = 0;
	scanf("%d", &num);

	vector<int> v(num);
	int cnt[8001] = { 0, };
	vector<int> max_num;
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &v[i]);
		sum += v[i];
		cnt[v[i] + 4000]++;
	}
	sort(v.begin(), v.end());

	printf("%d\n",int(round(float(sum)/num)));
	printf("%d\n", v[num/2]);
	for (int i = 0; i < 8001; i++)
	{
		if (max < cnt[i])
		{
			max = cnt[i];
		}
	}
	for (int i = 0; i < 8001; i++)
	{
		if (max == cnt[i])
		{
			max_num.push_back(i-4000);
		}
	}
	if (max_num.size() > 1)
	{
		sort(max_num.begin(), max_num.end());
		printf("%d\n", max_num[1]);
	}
	else
	{
		printf("%d\n", max_num[0]);
	}
	printf("%d\n", v[num - 1]-v[0]);
}