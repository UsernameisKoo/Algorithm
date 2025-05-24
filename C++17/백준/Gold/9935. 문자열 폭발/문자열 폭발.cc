#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str, bomb;
	cin >> str;
	cin >> bomb;

	vector<char>v;
	for (char c : str)
	{
		bool bomb_bool = false;
		v.push_back(c);
		if (v.size() >= bomb.size())
		{
			for (int i = 0; i < bomb.size(); i++)
			{
				if (v[v.size() - bomb.size() + i] != bomb[i])
				{
					bomb_bool = false;
					break;
				}

				bomb_bool = true;
			}
		}
		if (bomb_bool)
		{
			for (int i = 0; i < bomb.size(); i++)
			{
				v.pop_back();
			}
		}
	}
	if (v.empty())
		cout << "FRULA";
	else
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i];
	}
}