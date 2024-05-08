#include<stdio.h>
void convert(int);

int main(void)
{
	int t, c;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &c);
		convert(c);
	}
	return 0;
}

void convert(int m)
{
	printf("%d ", m / 25);
	m = m % 25; 

	printf("%d ", m / 10);
	m = m % 10;

	printf("%d ", m / 5);
	m = m % 5;

	printf("%d\n", m);
}