#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
	int n, t1, t2, time, cnt = 1;
	scanf("%d", &n);

	vector<pair<int,int> > v;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &t1, &t2);
		v.push_back(make_pair(t2, t1));
	}
	sort(v.begin(), v.end());

	time = v[0].first;
	for (int i = 1; i < v.size(); i++)
	{
		if (time <= v[i].second)
		{
			cnt++;
			time = v[i].first;
		}
		
	}
	printf("%d", cnt);

}