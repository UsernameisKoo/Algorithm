#include<stdio.h>
int main(void)
{
	int n, cnt = 0, index;
	char str[32] = { 0 };
	int alpha[26] = { 0 };

	scanf("%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		fgets(str, 32, stdin);
		index = str[0] - 'a';
		alpha[index]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] >= 5)
		{
			cnt++;
			printf("%c", i + 'a');
		}
	}
	if (cnt == 0)
		printf("PREDAJA");
}