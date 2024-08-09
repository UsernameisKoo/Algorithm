#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, b, c;

	int* a = NULL;
	long long num = 0;
	
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int) * n);

	if (a != NULL)
	{
		
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d %d", &b, &c);
	
		num += n;
		for (int i = 0; i < n; i++)
		{
			a[i] -= b;
			if (a[i] > 0)
			{
				if (a[i] % c == 0)
				{
					num += a[i] / c;
				}
				else
				{
					num += (a[i] / c + 1);
				}
			}
		}
		printf("%lld", num);
		free(a);
		return 0;

	}
	else
	{
		printf("MALLOC ERROR!");
		return -1;
	}
		
}