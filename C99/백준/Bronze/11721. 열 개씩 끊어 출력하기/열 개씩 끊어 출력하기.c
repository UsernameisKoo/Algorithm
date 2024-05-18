#include<stdio.h>
#include<string.h>
int main(void)
{
	char c[101] = { 0 };
	int len;
	scanf("%s", c, 101);

	len = strlen(c);

	for (int i = 0; i < len; i++)
	{
		if (i % 10 == 0 && i != 0)
		{
			printf("\n");
		}
		printf("%c", c[i]);
	}
	return 0;
}