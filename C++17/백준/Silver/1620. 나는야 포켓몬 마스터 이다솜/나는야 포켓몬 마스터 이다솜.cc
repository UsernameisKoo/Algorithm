#include<string>
#include<iostream>
#include<algorithm>
#include<cctype>
#include<unordered_map>
using namespace std;
string num[100001];
unordered_map<string,int > u_m;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	string str;
	
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		u_m.insert(make_pair(str,i));
		num[i] = str;
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> str;
		if (isdigit(str[0]))
		{
			cout << num[stoi(str)] << "\n";
		}
		else
		{
			cout << u_m.find(str)->second << "\n";
		}
	}
}