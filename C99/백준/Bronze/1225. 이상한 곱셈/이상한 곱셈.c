#include<stdio.h>
#include<string.h>

char a[10001], b[10001];

int main(void)
{
	

	int len_a, len_b;
	long long sum = 0;

	scanf("%s %s", a, b);

	len_a = (int)strlen(a);
	len_b = (int)strlen(b);

	for (int i = 0; i < len_a; i++)
	{
		for (int j = 0; j < len_b; j++)
		{
			sum += (a[i] - 48) * (b[j] - 48);
		}
	}
	printf("%lld", sum);

	return 0;
}