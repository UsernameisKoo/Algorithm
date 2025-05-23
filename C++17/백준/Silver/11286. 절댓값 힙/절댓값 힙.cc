#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, x;
	scanf("%d", &n);

	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> >> min_heap;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x == 0)
		{
			if (min_heap.empty())
				printf("0\n");
			else
			{
				printf("%d\n", min_heap.top().second);
				min_heap.pop();
			}
		}
		else
			min_heap.push(x < 0 ? make_pair(-x, x) : make_pair(x, x));
	}
}