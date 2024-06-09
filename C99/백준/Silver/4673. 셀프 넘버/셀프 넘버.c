#include<stdio.h>
int main(void)
{
	int num[10001] = { 0 };
	int sum;
	for (int i = 1; i <= 10000; i++)
	{
		sum = 0;
		sum = i + i%10 + (i/10 - (i/100)*10) + (i / 100 - (i / 1000) * 10) + (i / 1000 - (i / 10000) * 10) + i/10000;
		if (sum <= 10000)
		{
			num[sum] = 1;
		}
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (num[i] == 0)
		{
			printf("%d\n", i);
		}
	}
}