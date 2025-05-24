#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	string s;
	cin >> n >> m;

	unordered_set<string> n1;
	vector<string> name;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		n1.insert(s);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (n1.find(s) != n1.end())
			name.push_back(s);
	}
	sort(name.begin(), name.end());
	cout << name.size() << "\n";
	for (string item : name)
		cout << item << "\n";
}