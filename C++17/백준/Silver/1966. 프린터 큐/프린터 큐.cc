#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(void)
{
	int num, n, m, t, cnt = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		cnt = 0;
		scanf("%d %d", &n, &m);
		vector<int> v;
		queue<int> q;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &num);
			v.push_back(num);
			q.push(num);
		}
		sort(v.begin(), v.end());
		for (int i = 0; ; i++)
		{
			if (q.front() < *max_element(v.begin(),v.end()-cnt))
			{
				if (i == m)
				{
					m += q.size();
				}
				q.push(q.front());
				q.pop();
			}
			else
			{
				++cnt;
				if (i == m)
				{
					printf("%d\n", cnt);
					break;
				}
				q.pop();
			}
		}
	}
}