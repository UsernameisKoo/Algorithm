#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char a[10] = {0}, b[5] = { 0 }, c[5] = { 0 };
	char str[9] = { 0 };
	int num1 = 0, num2 = 0, len;

	scanf("%s\n%s\n%s", a, b, c);

	len = (int)strlen(b);

	num1 = atoi(a) + atoi(b) - atoi(c);

	strncat(a, b, len);
	num2 = atoi(a) - atoi(c);
	printf("%d\n", num1);
	printf("%d", num2);
}