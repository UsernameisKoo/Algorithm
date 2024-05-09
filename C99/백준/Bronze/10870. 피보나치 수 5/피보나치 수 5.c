#include<stdio.h>
int f(int);

int main(void)
{
	int n, result;
	scanf("%d", &n);
	
	result = f(n);

	printf("%d", result);
	
	return 0;
}
int f(int x)
{
	if (x == 0)
		return 0;
	else if (x == 1)
		return 1;
	else
		return f(x - 1) + f(x - 2);
}