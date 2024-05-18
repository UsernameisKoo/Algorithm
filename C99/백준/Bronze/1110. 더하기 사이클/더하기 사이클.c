#include<stdio.h>
int main(void)
{
	int n,result = -1, next_n = -1, cnt = 0;
	scanf("%d", &n);

	
	while (next_n != n)
	{
		if (cnt == 0)
		{
			next_n = n;
		}
		if (next_n < 10)
		{
			result = 0 + next_n % 10;
		}
		else
		{
			result = next_n / 10 + next_n % 10;
		}
		next_n = (next_n % 10) * 10 + result % 10;
		cnt++;
	}
	printf("%d", cnt);

	return 0;
}