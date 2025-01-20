#include<stdio.h>
#include<string.h>
int main(void)
{
	char word[16] = { 0 };
	int time = 0;
	char dial[11][5] = { "","","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

	scanf("%s", word, 16);
	int len = strlen(word);

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (strchr(dial[j], word[i]) != NULL)
				time += j;
		}
	}
	printf("%d", time);
}