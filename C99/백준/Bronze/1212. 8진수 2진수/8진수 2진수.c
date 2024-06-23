#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[333335] = { 0 };
	char first[8][4] = {"0","1","10","11","100","101","110" ,"111"};
	char others[8][4] = {"000","001","010","011","100","101","110" ,"111"};

	int len;


	scanf("%s", str);

	len = strlen(str);

	printf("%s",first[str[0] - '0']);
	for (int i = 1; i < len; i++)
	{
		printf("%s", others[str[i] - '0']);
	}
	return 0;
}