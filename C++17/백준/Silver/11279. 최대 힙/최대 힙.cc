#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, num;
	scanf("%d", &n);

	priority_queue<int> p_q;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num == 0)
		{
			if (p_q.empty())
				printf("0\n");
			else
			{
				printf("%d\n", p_q.top());
				p_q.pop();
			}		
		}
		else
		{
			p_q.push(num);
		}
	}
}