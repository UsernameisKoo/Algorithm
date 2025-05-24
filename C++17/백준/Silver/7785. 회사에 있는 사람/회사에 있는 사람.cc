#include<string>
#include<stdio.h>
#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n;
	string str, c;
	cin >> n;
	getchar();

	unordered_set<string> u_s;
	for (int i = 0; i < n; i++)
	{
		cin >> str >> c;
		getchar();
		if (c == "enter")
		{
			u_s.insert(str);
		}
		if (c == "leave")
		{
			u_s.erase(str);
		}
	}
	vector<string> v(u_s.begin(), u_s.end());
	sort(v.begin(), v.end(), greater<>());
	for (const auto& item : v)
	{
		cout << item << "\n";
	}
}