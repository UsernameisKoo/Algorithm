#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[101] = "";
	int a[26] = { 0 };

	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++)
	{
		for (int al = 'a'; al <= 'z'; al++)
		{
			if (s[i] == al)
			{
				a[al - 'a']++;
			}
		}
	}
	for (int i = 'a' - 'a'; i <= 'z' - 'a'; i++)
	{
		printf("%d ", a[i]);
	}
}