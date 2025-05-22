#include<stdio.h>
#include<stack>
#include<algorithm>
using namespace std;
int main(void)
{
	int num, n, idx = 0, possible = 1, now = 0;
	scanf("%d", &num);

	stack<int> s;
	char str[200001] = { 0, };
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &n);
		for (int x = now + 1; x <= n; x++)
		{
			s.push(x);
			now = x;
			str[idx++] = '+';
		}
		if (n == s.top())
		{
			s.pop();
			str[idx++] = '-';
		}
		else
		{
			possible = 0;
		}
	}
	if (possible == 0)
		printf("NO");
	else
	{
		for (int i = 0; i < idx; i++)
		{
			printf("%c\n", str[i]);
		}
	}
}