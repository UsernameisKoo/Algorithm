#include<stdio.h>

int main(void)
{
	int N, num,X;
	scanf("%d %d", &N ,&X);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (X > num)
			printf("%d ", num);
	}
}