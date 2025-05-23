#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int n, x;
	scanf("%d", &n);
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		v.push_back(x);
	}

	vector<int> s = v;

	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());

	for (int i = 0; i < n; i++)
	{
		printf("%d ", lower_bound(s.begin(), s.end(), v[i]) - s.begin());
	}
}