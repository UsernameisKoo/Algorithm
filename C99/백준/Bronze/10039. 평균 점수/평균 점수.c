#include<stdio.h>
int main(void)
{
	int sum = 0, avg, score;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score);

		if (score < 40)
			score = 40;

		sum += score;
	}
	avg = sum / 5;
	printf("%d", avg);
}