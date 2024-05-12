#include<stdio.h>
int main(void)
{
	int N, M;
	int list[101] = { 0, };
	int i, j, k;
	scanf("%d %d", &N, &M);
	
	for (int line = 0; line < M; line++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int x = i; x <= j; x++)
		{
			list[x] = k;
		}
	}
	for (int y = 1; y <= N; y++)
	{
		printf("%d ", list[y]);
	}	

}