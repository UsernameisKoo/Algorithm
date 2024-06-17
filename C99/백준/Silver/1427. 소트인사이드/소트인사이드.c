#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[11] = "";

	scanf("%s", str);

	for (int i = 0; i < strlen(str) - 1; i++)
	{
		int big = i;
		for (int j = i + 1; j < strlen(str); j++)
		{
			if (str[big] <= str[j])
				big = j;
		}
		int temp = str[i];
		str[i] = str[big];
		str[big] = temp;
	}
	printf("%s", str);

	return 0;
}