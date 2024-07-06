#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char a[5] = {0}, b[5] = { 0 };
	int len_a, len_b, len_sum, index;
	char rev_a[5] = { 0 }, rev_b[5] = { 0 };
	int sum, idx = 0;
	char rev_sum[6] = { 0 };
	scanf("%s %s", a, b);

	len_a = (int)strlen(a);
	len_b = (int)strlen(b);

	for (int i = len_a - 1; i >= 0; i--)
	{
		rev_a[len_a - i - 1] = a[i];
	}
	for (int i = len_b - 1; i >= 0; i--)
	{
		rev_b[len_b - i - 1] = b[i];
	}

	sum = atoi(rev_a) + atoi(rev_b);
	while (sum != 0)
	{
		rev_sum[idx] = sum % 10 + '0';//800 - 8 1000 1 208
		idx++;
		sum = sum / 10;	
	}
	len_sum = (int)strlen(rev_sum);
	for (index = 0;index < len_sum; index++)
	{
		if (rev_sum[index]!= '0')
			break;
	}
	for (int i=index;i<len_sum;i++)
	{
		printf("%c", rev_sum[i]);
	}
}