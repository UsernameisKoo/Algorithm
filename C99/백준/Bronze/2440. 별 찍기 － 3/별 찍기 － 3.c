#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);

	for (int line = 1; line <= n; line++)
	{
		for (int star = 0; star <= n - line; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}