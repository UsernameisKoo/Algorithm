#include<string.h>
#include<stdio.h>
#include<math.h>
char str[1000002] = { 0 };
int len_num(int num)
{
	int len = 0;
	while (1)
	{
		if (num == 0)
			break;
		num = num / 10;
		len++;
	}
	return len;
}
int main(void)
{
	
	int len, num = 0, cnt = 0;

	fgets(str, 1000002, stdin);
	len = (int)strlen(str) - 1;
	str[len] = '\0';

	if (len == 1)
	{
		if ((str[0] - '0') % 3 == 0)
		{
			printf("0\n");
			printf("YES");
		}
		else
		{
			printf("0\n");
			printf("NO");
		}
		return 0;
	}
	while (1)
	{
		num = 0;

		for (int i = 0; i < len; i++)
		{
			num += str[i] - '0';
		}
		cnt++;
		if (num >= 10)
		{
			len = len_num(num);
			for (int i = 0; i < len; i++)
			{
				str[i] = (num / (int)pow(10, len - i - 1) - num / (int)pow(10, len - i) * 10) + '0';
			}
			str[len] = '\0';
			continue;
		}
		else
		{	
			if (num % 3 == 0)
			{
				printf("%d\n", cnt);
				printf("YES");
				break;
			}
			else
			{
				printf("%d\n", cnt);
				printf("NO");
				break;
			}
		}
	}
}