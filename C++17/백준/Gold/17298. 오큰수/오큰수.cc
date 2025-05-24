#include<stdio.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, num;

	scanf("%d", &n);

	vector<int> v;
	vector<int> answer(n);
	stack<int>s;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		v.push_back(num);

	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (!s.empty())
		{
			if (s.top() > v[i])
			{
				answer[i] = s.top();
				s.push(v[i]);
			}
			else
			{
				while (!s.empty() && s.top() <= v[i])
				{
					s.pop();
				}
				if (s.empty())
				{
					answer[i] = -1;
				}
				else
				{
					answer[i] = s.top();
				}
				s.push(v[i]);
			}
		}
		else
		{
			s.push(v[i]);
			answer[i] = -1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", answer[i]);
	}
}