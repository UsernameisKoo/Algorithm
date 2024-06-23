#include<stdio.h>
int main(void)
{
	char c[8][9] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		scanf("%s", c[i]);
	}
	for (int line = 0; line < 8; line++)
	{
		for (int block = line % 2; block < 8; block += 2)
		{
			if (c[line][block] == 'F')
				cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}