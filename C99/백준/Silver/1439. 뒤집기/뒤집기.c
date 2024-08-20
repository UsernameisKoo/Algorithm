#include<stdio.h>
#include<string.h>
char str[1000001];
int main(void)
{
	int len, b_0 = 0, b_1 = 0, cnt0 = 0, cnt1 = 0;
	scanf("%s", str);
	len = (int)strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '0' && b_0 == 0)
		{
			b_0 = 1;
			b_1 = 0;
			cnt0++;
		}
		else if (str[i] == '1'  && b_1 == 0)
		{
			b_0 = 0;
			b_1 = 1;
			cnt1++;
		}
	}
	if (cnt1 > cnt0)
	{
		printf("%d", cnt0);
	}
	else
	{
		printf("%d", cnt1);
	}
}