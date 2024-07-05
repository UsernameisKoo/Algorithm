#include<stdio.h>
int main(void)
{
	int n;
	char str[32] = { 0 };
	scanf("%d\n", &n);
	
	for (int i = 0; i < n; i++)
	{
		fgets(str, 32, stdin);
		if (str[0] <= 'z' && str[0] >= 'a')
		{
			str[0] += 'A' - 'a';
		}
		printf("%s", str);
	}
}