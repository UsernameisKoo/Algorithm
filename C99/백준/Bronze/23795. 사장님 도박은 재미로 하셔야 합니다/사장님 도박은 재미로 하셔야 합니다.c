#include<stdio.h>
int main(void)
{
	int n = 0, sum = 0;
	while (n != -1)
	{
		scanf("%d", &n);
		sum += n;
	}
	printf("%d", sum + 1);
}