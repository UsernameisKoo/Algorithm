#include<stdio.h>
#include<math.h>
int main(void)
{
	long long t = 0;
	long long n = 0;
	scanf("%lld", &t);
	for (long long i = 0; i < t; i++)
	{
		scanf("%lld", &n);
		if (n <= 2)
		{
			printf("2\n");
			continue;
		}
		if (n == 3)
		{
			printf("3\n");
			continue;
		}
		while (n != -1)
		{
			for (long long x = 2; x <= sqrt(n); x++)
			{
				if (x > sqrt(n) - 1 && x <= sqrt(n) && n % x != 0)
				{
					printf("%lld\n", n);
					n = -2;
				}
				if (n % x == 0)
				{
					break;
				}
			}
			n++;
		}
		
	}
}