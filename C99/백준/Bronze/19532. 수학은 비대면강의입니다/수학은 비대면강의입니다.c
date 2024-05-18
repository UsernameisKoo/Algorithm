#include<stdio.h>
int main(void)
{
	int a, b, c, d, e, f;
	int y;
	//ax + by =c
	//dx + ey =f

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	for (int i = -999; i <= 999; i++)
	{
		if (b != 0)
		{
			if ((c - a * i) % b != 0)
			{
				continue;
			}
			else
			{
				y = (c - a * i) / b;
			
				if (y < -999 || y > 999)
				{
					continue;
				}
				if (d * i + e * y != f)
				{
					continue;
				}
				else
				{
					printf("%d %d", i, y);
					return 0;
				}
			}
		}
		else if (e != 0)
		{
			if ((f - d * i) % e != 0)
			{
				continue;
			}
			else
			{
				y = (f - d * i) / e;

				if (y < -999 || y > 999)
				{
					continue;
				}
				if (a * i + b * y != c)
				{
					continue;
				}
				else
				{
					printf("%d %d", i, y);
					return 0;
				}
			}
		}
		
	}
}