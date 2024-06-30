#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[102] = { 0 }, s2[102] = { 0 };
	char op;
	int len1, len2; 
	char str[10002] = { 0 };

	fgets(s1, 102, stdin);
	op = getchar();
	getchar();
	fgets(s2, 102, stdin);

	len1 = (int)strlen(s1) - 1; 
	len2 = (int)strlen(s2) - 1; 
	if (op == '+')
	{
		if (len1 == len2)
		{
			strcpy(str, s1);
			str[0] = '2';
		}
		else if(len1 > len2)
		{
			strncpy(str, s1, len1);
			str[len1 - len2] = '1';
		}
		else if (len1 < len2)
		{
			strncpy(str, s2, len2);
			str[len2 - len1] = '1';
		}
	}
	else if (op == '*')
	{
		str[0] = '1';
		for (int i = 1; i < len1 + len2 - 1; i++)
		{
			str[i] = '0';
		}
	}
	printf("%s", str);

}