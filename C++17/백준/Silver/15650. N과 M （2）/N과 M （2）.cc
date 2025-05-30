#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

void combine(const vector<int>& num, vector<int>& path, int start, int r)
{
	if (path.size() == r) {
		for (int x : path)
			printf("%d ", x);
		printf("\n");
		return;
	}

	for (int i = start; i < num.size(); i++)
	{
		path.push_back(num[i]);
		combine(num, path, i + 1, r);
		path.pop_back();
	}
}
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	vector<int> num;
	vector<int> path;
	for (int i = 1; i <= n; i++)
	{
		num.push_back(i);
	}
	combine(num, path, 0, m);
}