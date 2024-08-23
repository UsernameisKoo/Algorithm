#include<stdio.h>
#include<string.h>
int main(void)
{
	int t, len, cnt = 0;
	char str[101] = { 0 };

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%s", str);
		len = (int)strlen(str);
		cnt = 0;
		for (int j = 0; j < len; j++)
		{
			if (str[j] == 'D')
			{
				break;
			}
			cnt++;
		}
		printf("%d\n", cnt);
	}

}