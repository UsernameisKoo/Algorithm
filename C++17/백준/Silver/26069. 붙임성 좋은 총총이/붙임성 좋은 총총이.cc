#include<iostream>
#include<string>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string s1, s2;

	unordered_set<string> zom;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> s2;
		if (s1 == "ChongChong" || s2 == "ChongChong")
		{
			if(zom.find(s1) == zom.end())
				zom.insert(s1);
			if(zom.find(s2) == zom.end())
				zom.insert(s2);
		}
		else if (zom.find(s1) != zom.end())
		{
			zom.insert(s2);
		}
		else if (zom.find(s2) != zom.end())
		{
			zom.insert(s1);
		}
	}
	cout << zom.size();
}