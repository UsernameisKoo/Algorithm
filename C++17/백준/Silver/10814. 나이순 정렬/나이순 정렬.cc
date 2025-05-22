#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare1(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}
int main(void)
{
	int n, num;
	string str;
	scanf("%d", &n);
	vector<pair<int, string> >v;
	for (int i = 0; i < n; i++)
	{
		cin >> num >> str;
		v.push_back(make_pair(num, str));
	}
	stable_sort(v.begin(), v.end(), compare1);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << ' ' << v[i].second << endl;
	}
}