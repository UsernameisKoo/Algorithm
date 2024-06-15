#include<stdio.h>
int main(void)
{
	int n[5],sum=0,min;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &n[i]);
		sum += n[i];
	}
	for (int i = 0; i < 4; i++)
	{
		min = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (n[j] <= n[min])
				min = j;
		}
		int temp = n[i];
		n[i] = n[min];
		n[min] = temp;
	}
	printf("%d\n%d", sum / 5,n[2]);
}