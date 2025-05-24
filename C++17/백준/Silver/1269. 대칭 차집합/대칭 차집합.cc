#include<iostream>
#include<unordered_set>
#include<algorithm>

char n1[100000001] = {};

using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, num, cnt = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		n1[num - 1] = '1';
	}
	for (int i = 0; i < m; i++)
	{
		cin >> num;
		if (n1[num - 1] == '1')
		{
			cnt++;
		}
	}
	cout << n + m - cnt * 2;
}