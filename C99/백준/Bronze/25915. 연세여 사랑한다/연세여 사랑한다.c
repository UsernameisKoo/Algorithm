#include<stdio.h>
int main(void)
{
	int num = 0;
	char c;
	char* str = "ILOVEYONSEI";

	scanf("%c", &c);

	for (int i = 0; i < 11; i++)
	{
		if (str[i] >= c)
		{
			num += str[i] - c;
			c = str[i];
		}
		else
		{
			num -= (str[i] - c);
			c = str[i];
		}
	}
	printf("%d", num);
}