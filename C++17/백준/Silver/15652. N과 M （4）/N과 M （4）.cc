#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
void backtrack(const vector<int>& nums, vector<int>& path, int start, int r)
{
	if (path.size() == r)
	{
		for (const int& x : path)
			printf("%d ", x);
		printf("\n");
		return;
	}

	for (int i = start; i < nums.size(); i++)
	{
		path.push_back(nums[i]);
		backtrack(nums, path, i, r);
		path.pop_back();
	}
}
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	vector<int> nums;
	vector<int> path;
	for (int i = 1; i <= n; i++)
	{
		nums.push_back(i);
	}
	backtrack(nums, path, 0, m);
}