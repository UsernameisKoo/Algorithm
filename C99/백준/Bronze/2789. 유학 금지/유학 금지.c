#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[102] = { 0 };
	int len;

	fgets(str, 102, stdin);
	len = (int)strlen(str) - 1;

	for (int i = 0; i < len; i++)
	{
		switch (str[i])
		{
			case('C'):break;
			case('A'):break;
			case('M'):break;
			case('B'):break;
			case('R'):break;
			case('I'):break;
			case('D'):break;
			case('G'):break;
			case('E'):break;
			default: printf("%c", str[i]);
		}
	}

	return 0;
}