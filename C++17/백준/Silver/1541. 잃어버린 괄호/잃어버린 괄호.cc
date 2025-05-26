#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	
	int num, sum = 0, idx = 0;
	bool m = false;
	cin >> s;

	vector<int> v;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '+')
		{
			num = stoi(s.substr(idx, i-idx + 1));
			if(!m)
				v.push_back(num);
			else
				v.push_back(-num);
			idx = i + 1;
		}
		else if (s[i] == '-')
		{
			num = stoi(s.substr(idx, i - idx + 1));
			if (!m)
			{
				m = true;
				v.push_back(num);
			}
			else
				v.push_back(-num);
			idx = i + 1;
		}
	}
	num = stoi(s.substr(idx, s.size() - idx));
	if (!m)
	{
		m = true;
		v.push_back(num);
	}
	else
		v.push_back(-num);

	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	cout << sum;
}