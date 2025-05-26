#include<string>
#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	string s1, s2;
	unordered_map<string,string > u_m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> s2;
		u_m.insert(make_pair(s1, s2));
	}
	for (int i = 0; i < m; i++)
	{
		cin >> s1;
		cout << u_m[s1] << "\n";
	}
}