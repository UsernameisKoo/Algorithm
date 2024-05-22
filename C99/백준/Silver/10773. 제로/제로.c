#include<stdio.h>
int main(void)
{
	int n[100000] = {0};
	int k, num, top = 0;
	long long sum = 0;
	scanf("%d", &k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &num);
		if (num != 0)
		{
			n[top++] = num;
			sum += num;
		}
		else if(num == 0 && top > 0)
		{
			sum -= n[--top];
		}
	}
	printf("%lld", sum);

	return 0;
}