#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[101] = { 0 };
	int len, cnt = 0;

	scanf("%s", str);

	len = (int)strlen(str);

	for (int i = 0; i < len; i++)
	{
		switch (str[i])
		{
			case('a'):
			case('e'):
			case('i'):
			case('o'):
			case('u'): cnt++; break;
		}
	}

	printf("%d", cnt);
}