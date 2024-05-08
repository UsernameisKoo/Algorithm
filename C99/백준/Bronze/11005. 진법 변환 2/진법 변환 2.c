#include<stdio.h>
void convert(int, int);

int main(void)
{
	int n,b;
	int len = 0, result = 0;

	scanf("%d %d", &n, &b);
	convert(n, b);

	return 0;
}
void convert(int n, int b)
{
	
	if (n != 0)
	{	
		convert(n / b, b);
		if (n % b > 9 && b > 10)
		{
			printf("%c", n % b + 'A' - 10);
		}
		else
		{
			printf("%d", n % b);
		}
	}
}