#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[1002] = { 0 }, str2[1002] = { 0 };

	fgets(str1, 1002, stdin);
	fgets(str2, 1002, stdin);

	if (strlen(str1) >= strlen(str2))
	{
		printf("go");
	}
	else
	{
		printf("no");
	}

	return 0;
}