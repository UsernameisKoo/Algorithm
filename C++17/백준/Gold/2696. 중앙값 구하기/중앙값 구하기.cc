#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int t, m, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &m);
		vector<int> v;
		vector<int> s;
		printf("%d\n", m / 2 + 1);
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &n);
			v.push_back(n);
			if (j % 2 == 0)
			{
				s = v;
				sort(s.begin(), s.end());
				printf("%d ", s[j / 2]);
			}
		}
		printf("\n");
	}
}