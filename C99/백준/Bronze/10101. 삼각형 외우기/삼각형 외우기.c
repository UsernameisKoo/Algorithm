#include<stdio.h>
int main()
{
	int angle[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &angle[i]);
	}

	if (angle[0] == 60 && angle[1] == 60 && angle[2] == 60)
	{
		printf("Equilateral");
	}
	else if (angle[0]+angle[1]+angle[2]==180)
	{
		if (angle[0] == angle[1] || angle[0] == angle[2] || angle[1] == angle[2])
		{
			printf("Isosceles");
		}
		if (angle[0] != angle[1] && angle[0] != angle[2] && angle[1] != angle[2])
		{
			printf("Scalene");
		}
	}
	else
	{
		printf("Error");
	}

	return 0;
}