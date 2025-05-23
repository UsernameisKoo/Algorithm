#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, x;
	scanf("%d", &n);

	priority_queue<int, vector<int>, greater<int> > q;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x == 0)
		{
			if(q.empty())
			{
				printf("0\n");
			}
			else
			{
				printf("%d\n", q.top());
				q.pop();
			}
		}
		else
		{
			q.push(x);
		}
	}
}