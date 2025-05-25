#include<iostream>
#include<unordered_set>
#include<string>
#include<algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0;
	string s;

	unordered_set<string> name;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "ENTER")
		{
			cnt += (int)name.size();
			name = unordered_set<string>();
		}
		else
			name.insert(s);
	}
	cnt += (int)name.size();
	cout << cnt;
}