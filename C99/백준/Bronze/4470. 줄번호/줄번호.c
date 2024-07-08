#include<stdio.h>
#include<string.h>
int main(void)
{
	int n, len = 0;
	char str[52] = { 0 };
	scanf("%d\n", &n);


	for (int i = 0; i < n; i++)
	{
		fgets(str, 52, stdin);

		len = (int)strlen(str) - 1;

		printf("%d. ", i + 1);
		printf("%s", str);
	}


}