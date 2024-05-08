#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	int x = 2;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		x += pow(2, i);
	}

	printf("%d", x*x);
	return 0;
}