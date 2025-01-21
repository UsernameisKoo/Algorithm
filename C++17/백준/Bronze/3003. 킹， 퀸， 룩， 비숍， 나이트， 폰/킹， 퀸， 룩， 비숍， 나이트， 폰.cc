#include<stdio.h>
int main(void)
{
	int num, extra = 0;
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &num);
		if (i == 0 || i == 1)
			extra = 1 - num;
		else if (i == 2 || i == 3 || i == 4)
			extra = 2 - num;
		else
			extra = 8 - num;
		printf("%d ", extra);
	}
}