#include<stdio.h>
int main(void)
{
	char S[100] = { 0, };
	scanf("%s", S,100);
	for (int i = 97; i <= 122; i++)
	{
		int j = 0;
		while (S[j] != false)
		{
			if (S[j] == (char)i)
				break;
			j++;

		}
		if (S[j] == (char)i)
			printf("%d ", j);
		else
			printf("-1 ");
	}
}