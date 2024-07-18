#include<stdio.h>
int main(void)
{
	int a, b, c;
	int d;
	int h = 0, m = 0, s = 0;
	scanf("%d %d %d", &a, &b, &c);

	scanf("%d", &d);

	h = d / 3600;
	d = d - d / 3600 * 3600;

	m = d / 60;
	d = d - d / 60 * 60;

	s = d;

	c += s;
	if (c >= 60)
	{
		c %= 60;
		b++;
	}
	b += m;
	if (b >= 60)
	{
		b %= 60;
		a++;
	}
	a += h;
	if (a >= 24)
	{
		a %= 24;
	}
	printf("%d %d %d", a, b, c);
}