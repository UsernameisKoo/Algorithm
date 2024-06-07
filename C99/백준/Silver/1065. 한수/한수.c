#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	if (n < 100)
		printf("%d", n);
	else if(n <= 1000)
	{
		int count = 99;
		int d;
		if (n == 1000)
		{
			n = 999;
		}
		
		for (int i = 100; i <= n; i++)
		{
			d = (i / 10 - (i / 100)*10) - i % 10;
			if (i / 100 - (i / 10 - (i / 100) * 10) == d)
			{
				count++;
			}
				
		}
		printf("%d", count);
	}

}