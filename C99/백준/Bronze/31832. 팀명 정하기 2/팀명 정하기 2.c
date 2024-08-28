#include<stdio.h>
#include<string.h>
int main(void)
{
	int len, n, cnt_b = 0, cnt_s = 0, cnt_n = 0;
	char s[21] = { 0 };
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		cnt_b = 0, cnt_s = 0, cnt_n = 0;
		scanf(" %s", s);
		
		len = (int)strlen(s);
		if (len > 10)
		{
			continue;
		}
		for (int j = 0; j < len; j++)
		{
			if ('0' <= s[j] && s[j] <= '9')
			{
				cnt_n++;
			}
			else if('a' <= s[j] && s[j]<='z')
			{
				cnt_s++;
			}
			else if ('A' <= s[j] && s[j] <= 'Z')
			{
				cnt_b++;
			}
		}
		if (cnt_b > cnt_s)
		{
			continue;
		}
		if (cnt_n == len)
		{
			continue;
		}
		printf("%s\n", s);
	}
}