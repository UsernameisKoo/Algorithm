#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[257] = { 0 };
	int len;
	int cnt;

	while (1)
	{
		fgets(str, 257, stdin);

		if (str[0] == '#')
			break;

		len = strlen(str) - 1;
		cnt = 0;

		for (int i = 0; i < len; i++)
		{
			switch (str[i])
			{
				case('a'): cnt++; break;
				case('e'): cnt++; break;
				case('i'): cnt++; break;
				case('o'): cnt++; break;
				case('u'): cnt++; break;
				case('A'): cnt++; break;
				case('E'): cnt++; break;
				case('I'): cnt++; break;
				case('O'): cnt++; break;
				case('U'): cnt++; break;
			}
		}

		printf("%d\n", cnt);
	}
}