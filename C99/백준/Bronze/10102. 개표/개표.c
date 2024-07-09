#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int len, a = 0, b = 0;
	char* str;

	scanf("%d\n", &len);

	str = (char*)malloc(len + 2);

	fgets(str, len + 2, stdin);

	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'A')
			a++;
		if (str[i] == 'B')
			b++;
	}
	if (a > b)
		printf("A");
	else if (a < b)
		printf("B");
	else
		printf("Tie");

	free(str);
}
