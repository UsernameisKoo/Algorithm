#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[502];
	int len;

	while (1)
	{
		fgets(str, 502, stdin);

		if (strcmp(str, "END\n") == 0)
			break;

		len = (int)strlen(str) - 1;

		for (int i = len - 1; i >= 0; i--)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
	
}