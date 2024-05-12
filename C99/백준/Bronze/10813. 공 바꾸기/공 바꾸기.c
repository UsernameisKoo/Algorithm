#include<stdio.h>
int main(void)
{
	int blanket[100],N, M, i, j,temp;
	scanf("%d %d", &N, &M);
	for (int x = 0; x <= N; x++)
	{
		blanket[x] = x;
	}
	
	for (int x = 0; x < M; x++)
	{
		scanf("%d %d", &i, &j);
		temp = blanket[i];
		blanket[i] = blanket[j];
		blanket[j] = temp;
	}
	for (int i = 1; i <= N; i++)
	{
		printf("%d ", blanket[i]);
	}
}