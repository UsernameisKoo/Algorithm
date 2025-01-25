#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	string str;
	char c;
	int max = 0;
	cin >> str;

	transform(str.begin(), str.end(), str.begin(), ::toupper);
	
	for (int i = 'A'; i <= 'Z'; i++)
	{
		if (max < count(str.begin(), str.end(), i))
		{
			max = count(str.begin(), str.end(), i);
			c = i;
		}
		else if (max == count(str.begin(), str.end(), i))
		{
			max = count(str.begin(), str.end(), i);
			c = '?';
		}
	}
	cout << c;
}