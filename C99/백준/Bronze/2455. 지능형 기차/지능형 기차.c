#include<stdio.h>
int main(void)
{
	int n, m;
	int now = 0, max = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &n, &m);
		now -= n;
		now += m;
		if (max <= now)
		{
			max = now;
		}
	}
	
	printf("%d", max);
}