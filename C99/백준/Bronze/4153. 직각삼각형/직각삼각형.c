#include<stdio.h>
int main(void)
{
	int a, b, c;
	int max = 0, r1 = 0, r2 = 0;
	while(1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;

		if (a > b && a > c)
		{
			max = a;
			r1 = b;
			r2 = c;
		}
		if (b > a && b > c)
		{ 
			max = b;
			r1 = a;
			r2 = c;
		}
		if (c > b && c > a)
		{
			max = c;
			r1 = b;
			r2 = a;
		}
		
		if ((max * max == r1 * r1 + r2 * r2) && max < r1 + r2)
			printf("right\n");
		else
			printf("wrong\n");
	}
}