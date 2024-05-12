#include<stdio.h>
int main(void)
{
	int num,max=0,n;
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &num);
		if (max < num)
		{
			max = num;
		}
		if (max == num)
		{
			n = i;
		}
	}
	printf("%d\n%d", max,n);
}