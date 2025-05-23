#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, x;
	scanf("%d", &n);
	priority_queue<int, vector<int>, greater<int> > min_heap;

	for (int i = 0; i < n * n; i++)
	{
		scanf("%d", &x);
		if (min_heap.size() >= n)
		{
			if (min_heap.top() < x)
			{
				min_heap.pop();
				min_heap.push(x);
			}
		}
		else
			min_heap.push(x);
	}
	printf("%d", min_heap.top());
}