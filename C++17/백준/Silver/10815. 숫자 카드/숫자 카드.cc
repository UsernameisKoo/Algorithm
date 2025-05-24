#include<stdio.h>
char card[20000001] = {0, };
int main(void)
{

	int n, m, num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		card[num + 10000000] = '1';
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &num);
		if (card[num + 10000000] == '1')
			printf("1 ");
		else
			printf("0 ");
	}
}