#include<stdio.h>
int f(int);
int main(void)
{
	int n,i = 0,sum = 0;
	scanf("%d", &n);

	printf("%d", f(n));
}
int f(int n)
{
	int a = 0, b = 1, temp;
	if (n < 2)
		return n;
	else
	{
		for (int i = 2; i <= n; i++)
		{
			temp = a; 
			a = b;
			b = temp + b;
		}
		return b;
	}


}