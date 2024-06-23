#include<stdio.h>
int main(void)
{
	char c;
	do
	{
		c = getchar();
		if (c >= 'A' && c <= 'Z')
			printf("%c", c);
	} while (c != '\n');
}