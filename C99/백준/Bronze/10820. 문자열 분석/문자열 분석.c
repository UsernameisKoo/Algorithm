#include<stdio.h>
int main(void)
{
	char c;
	int small = 0, big = 0, num = 0, blank = 0;
	while (scanf("%c", &c)!=EOF)
	{
		if(c == '\n')
		{
			printf("%d %d %d %d\n", small, big, num, blank);
			small = 0;
			big = 0;
			num = 0;
			blank = 0;
		}
		else if (c >= 'a' && c <= 'z')
		{
			small += 1;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			big += 1;
		}
		else if (c >= '0' && c <= '9')
		{
			num += 1;
		}
		else if (c == ' ')
		{
			blank += 1;
		}
	}
}