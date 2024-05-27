#include<stdio.h>
#include<math.h>
int main(void)
{
	int n = 0, cnt = 0, num[246913] = { 1,1,0, };

	for (int i = 2; i <= sqrt(246912); i++)
	{
		if (num[i] == 1)
		{
			continue;
		}
		for (int j = i * i; j < 246913; j++)
		{
			if (j % i == 0)
			{
				num[j] = 1;
			}
		}
	}
	while(1)
	{
		cnt = 0;
		scanf("%d",&n);
		if (n == 0)
			break;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (num[i] == 0)
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}