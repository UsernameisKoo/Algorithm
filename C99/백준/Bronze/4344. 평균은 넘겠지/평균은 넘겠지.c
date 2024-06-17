#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int x = 0; x < t; x++)
	{
		int n, sum = 0,cnt = 0;
		int* score;
		double avg, result;
		scanf("%d", &n);

		score = (int*)malloc(sizeof(int) * n);

		for (int i = 0; i < n; i++)
		{
			if (score == NULL)
			{
				exit(1);
			}
			else
			{
				scanf("%d", score + i);
				sum += *(score + i);
			}
			
		}
		avg = (float)sum / n;

		for (int i = 0; i < n; i++)
		{
			if (*(score + i) > avg)
			{
				cnt++;
			}
		}
		result = (double)cnt / n;

		printf("%.3f%%\n", result*100);

		free(score);
	}
	


	
}