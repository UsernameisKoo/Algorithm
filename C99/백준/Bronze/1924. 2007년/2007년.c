#include<stdio.h>
int main(void)
{
	int m, d;
	scanf("%d %d", &m, &d);
	for (int i = m - 1; i >= 1; i--)
	{
		if (i >= 8 && i % 2 == 0)
		{
			d += 31;
		}
		else if (i >= 8 && i % 2 == 1)
		{
			d += 30;
		}
		else if (i < 8 && i % 2 == 1)
		{
			d += 31;
		}
		else if (i == 2)
		{
			d += 28;
		}
		else if (i < 8 && i % 2 == 0)
		{
			d += 30;
		}
	}
	switch (d % 7)
	{
	case(0):printf("SUN"); break;
	case(1):printf("MON"); break;
	case(2):printf("TUE"); break;
	case(3):printf("WED"); break;
	case(4):printf("THU"); break;
	case(5):printf("FRI"); break;
	case(6):printf("SAT"); break;
	}
}