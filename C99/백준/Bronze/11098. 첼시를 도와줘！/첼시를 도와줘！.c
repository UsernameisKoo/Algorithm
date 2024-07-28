#include<stdio.h>
int main(void)
{
	int n, p, c, max = 0, max_idx = 0;
	char str[100][21] = { 0 };

	scanf("%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		max = 0, max_idx = 0;

		scanf("%d\n", &p);
		for (int people = 1; people <= p; people++)
		{
			scanf("%d %s", &c, str[people - 1]);

			if (c >= max)
			{
				max = c;
				max_idx = people - 1;
			}
		}
		printf("%s\n", str[max_idx]);
	}
}