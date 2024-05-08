#include<stdio.h>
int main(void)
{
	int n;
	int i = 0;
	scanf("%d", &n);
	
	while (1)
	{
		if (n <= 1)
			break;

		i++;
		n -= 6 * i;
	}
	printf("%d", i+1);
	return 0;
}