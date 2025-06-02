#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void permute(vector<bool>& used, const vector<int>& v, vector<int>& path, int m)
{
	if (path.size() == m)
	{
		for (const int& x : path)
			cout << x << " ";
		cout << "\n";
		return;
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (!used[i])
		{
			path.push_back(v[i]);
			used[i] = true;
			permute(used, v, path, m);
			path.pop_back();
			used[i] = false;
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, num;
	cin >> n >> m;
	vector<int> v;
	vector<int> path;
	vector<bool> used(n,false);
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	permute(used, v, path, m);
}