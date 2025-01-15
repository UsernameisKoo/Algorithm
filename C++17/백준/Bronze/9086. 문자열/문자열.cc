#include<stdio.h>
int main(void)
{
	int T;
	char str[1000] = {0}, first[1] = {0}, last[1] = {0};
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s",str,1000);
		first[0] = str[0];
		for (int x = 0; x<1000; x++)
		{
			if (str[x] == '\0')
			{
				x--;
				last[0] = str[x];
				break;
			}
		}
		printf("%c%c\n", first[0], last[0]);
	}
}