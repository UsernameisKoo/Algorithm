#include<stdio.h>
#include<math.h>
int main(void)
{
	int m, n, num;
	int sum = 0,min = 0;

	scanf("%d", &m);
	scanf("%d", &n);

	num = m;

	for (int num = m; num <= n; num++)
	{
		if (num == 2)
		{
			sum += num;
			min = num;
		}
		if (num == 3)
		{
			sum += num;
			if(min==0)
				min = num;
		}
		for (int i = 2; i <= sqrt(num); i++)
		{
			
			if (num % i == 0)
			{
				break;
			}
			if (num % i != 0 && i > sqrt(num) - 1)
			{
				sum += num;
				if (min == 0)
				{
					min = num;
				}
			}
		}
	}
	if (min == 0)
	{
		printf("-1");
	}
	else {
		printf("%d\n", sum);
		printf("%d", min);
	}
	

	return 0;

}