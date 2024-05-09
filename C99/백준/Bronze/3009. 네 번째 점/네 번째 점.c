#include<stdio.h>
int main(void)
{
	int x[3], y[3];
	int answer_x = -1, answer_y = -1;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	if (x[0] != x[1] && x[1] != x[2])
	{
		answer_x = x[1];
	}
	if (x[0] != x[1] && x[1] == x[2])
	{
		answer_x = x[0];
	}
	if (x[0] == x[1] && x[1] != x[2])
	{
		answer_x = x[2];
	}

	if (y[0] != y[1] && y[1] != y[2])
	{
		answer_y = y[1];
	}
	if (y[0] != y[1] && y[1] == y[2])
	{
		answer_y = y[0];
	}
	if (y[0] == y[1] && y[1] != y[2])
	{
		answer_y = y[2];
	}

	printf("%d %d", answer_x, answer_y);

	return 0;
}