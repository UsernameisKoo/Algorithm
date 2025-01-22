#include<stdio.h>
#include<string.h>
int main(void)
{
	char eng[100] = { 0 }, temp[100] = {0};
	int num=0;
	scanf("%s", eng, 100);
	int len = strlen(eng);
	for (int i = 0; i < len; i++)
	{
		temp[i] = eng[len-1-i];
	}
	for (int i = 0; i < len; i++)
	{
		if (temp[i] != eng[i])
			num++;
	}
	if (num != 0)
		printf("0");
	else
		printf("1");
}