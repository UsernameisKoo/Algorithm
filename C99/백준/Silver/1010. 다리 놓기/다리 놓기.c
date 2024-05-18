#include<stdio.h>
int main(void)
{
	int t;
	long long n, m;
	long long bridge;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%lld %lld", &n, &m);
		
		bridge = 1;

		if (n > m)
		{
			printf("0\n");
			continue;
		}
		
		for (int x = m-n+1,y=1; x <=m; x++,y++)
		{
			bridge *= x;
			bridge /= y;
		}
		
		printf("%lld\n", bridge);
	}
	
}