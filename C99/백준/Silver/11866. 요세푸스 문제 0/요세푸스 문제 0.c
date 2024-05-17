#include<stdio.h>
int main(void)
{
	int n, k, p_cnt = 0;
	int p[1000] = { 0 };
	int cnt = 0, index = 0;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		p[i] = 1;
	}
	while (1)
	{
		if (p[index] == 1)
		{
			cnt++;
		}
		if (cnt == k)
		{
			p[index] = 0;
			
			cnt = 0;
			p_cnt++;
			if (p_cnt == 1)
			{
				printf("<");
			}
			if (p_cnt < n)
			{
				printf("%d, ", index + 1);
			}
			if (p_cnt == n)
			{
				printf("%d>",index+1); break;
			}
		}
		if (index == n - 1)
		{
			index = -1;
		}
		index++;
	}

	return 0;
}