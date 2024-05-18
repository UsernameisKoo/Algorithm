#include<stdio.h>
int main(void)
{
	long long s;
	long long sum = 0;
	scanf("%lld", &s);

	
	for (int i = 1;; i++)
	{
		sum += i;
		if (sum > s)
		{
			printf("%d", i - 1);
			break;
		}
	}
	
	return 0;

}