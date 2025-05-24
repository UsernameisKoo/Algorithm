#include<unordered_set>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	unordered_set<int> s;
	unordered_set<int> all_s = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	string str;

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (str == "add")
		{
			cin >> n;
			s.insert(n);
		}
		else if (str == "remove")
		{
			cin >> n;
			s.erase(n);
		}
		else if (str == "check")
		{
			cin >> n;
			if (s.find(n) != s.end())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (str == "toggle")
		{
			cin >> n;
			if (s.find(n) != s.end())
				s.erase(n);
			else
				s.insert(n);
		}
		else if (str == "all")
		{
			s = all_s;
		}
		else if (str == "empty")
		{
			s.clear();
		}
	}
}