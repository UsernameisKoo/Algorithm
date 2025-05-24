#include<stdio.h>
#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, m, cnt = 0;
	string str;

	scanf("%d %d", &n, &m);
	getchar();
	set<string> s;

	for (int i = 0; i < n; i++)
	{
		getline(cin, str);
		s.insert(str);
	}
	for (int i = 0; i < m; i++)
	{
		getline(cin, str);
		if (s.find(str) != s.end())
			cnt++;
	}
	printf("%d", cnt);
}