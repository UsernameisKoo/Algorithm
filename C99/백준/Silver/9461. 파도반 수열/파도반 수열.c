#include<stdio.h>
int main(void)
{
	int t, n;
	long long result[100] = { 1,1,1,2,2,3,4,5,7,9,0 };
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		if (n >= 6)
		{
			for (int x = 5; x < n; x++)
			{
				if (result[x] == 0)
				{
					result[x] = result[x - 1] + result[x - 5];
				}
			}
			printf("%lld\n", result[n-1]);
		}
		else
		{
			printf("%lld\n", result[n - 1]);
		}

		
	}
}