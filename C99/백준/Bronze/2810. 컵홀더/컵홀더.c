#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	int n, cnt_L = 0, len = 0;
	char* p;
	int r = 0, l = 0, seat = 0; // right , left

	scanf("%d\n", &n);

	p = (char*)malloc(sizeof(char) * (n + 2));

	fgets(p, n + 2, stdin);

	len = (int)strlen(p) - 1;

	if (p != NULL)
	{
		for (int i = 0; i < len; i++)
			{
				if (p[i] == 'S' && l == 0)
				{
					seat++;
				}
				if (p[i] == 'S' && l == 1)
				{
					seat++;
				}
				if (p[i] == 'L' && cnt_L % 2 == 0)
				{
					if (l == 1)
					{
						cnt_L++;
						continue;
					}
					else
					{
						seat++;
					}
					cnt_L++;
				}
				if (p[i] == 'L' && cnt_L % 2 == 1)
				{
					l = 1;
					seat++;
					cnt_L++;
				}
			}
	}
	
	printf("%d", seat);

	free(p);
}