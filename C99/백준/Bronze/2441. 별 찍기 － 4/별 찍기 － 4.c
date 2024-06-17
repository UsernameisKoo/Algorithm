#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int line = 1; line <= n; line++)
	{
		for (int blank = line - 1; blank > 0; blank--)
		{
			printf(" ");
		}
		for (int star = n - line; star >= 0; star--)
		{
			printf("*");
		}
		printf("\n");
	}
}