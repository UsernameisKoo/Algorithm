#include<stdio.h>
#include<string.h>

char str[1000002];

int main(void)
{
	int len, sum = 0;

	fgets(str, 1000002, stdin);
	len = (int)strlen(str) - 1;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '1')
		{
			switch ((i % 3 + 3 - len % 3)%3)
			{
			case(0): sum += 4; break;
				case(1): sum += 2; break;
				case(2): sum += 1; break;
			}
			
		}
		if ((len - i) % 3 == 1)
		{
			printf("%d", sum);
			sum = 0;
		}
	}

	return 0;
}