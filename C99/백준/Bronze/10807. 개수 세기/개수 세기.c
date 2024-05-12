#include<stdio.h>
int main(void)
{
	int n,num,count=0;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &num);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == num)
		{
			count++;
		}
	}
	printf("%d", count);
	
	return 0;
}