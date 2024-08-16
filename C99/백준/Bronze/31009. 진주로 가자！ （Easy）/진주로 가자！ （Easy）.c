#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int n, num = 0;
	int cnt = 0;
	int* c;
	char d[16] = { 0 };
	scanf("%d", &n);

	c = (int*)malloc(sizeof(int) * n);

	if (c != NULL)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%s %d", d, &c[i]);
			if (strcmp(d, "jinju") == 0)
			{
				num = c[i];
			}
		}

		for (int i = 0; i < n; i++)
		{
			if (c[i] > num)
				cnt++;
		}
		printf("%d\n", num);
		printf("%d", cnt);
	}
	else
	{
		return -1;
	}
	

	free(c);
	return 0;
}