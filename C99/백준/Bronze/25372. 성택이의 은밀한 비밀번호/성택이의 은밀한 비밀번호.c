#include<stdio.h>
#include<string.h>
int main(void)
{
	char n[1002] = { 0 };
	int len, num;
	scanf("%d\n", &num);
	for (int i = 0; i < num; i++)
	{
		fgets(n, 1002, stdin);
		len = (int)strlen(n) - 1;

		if (len >= 6 && len <= 9)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
}