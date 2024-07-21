#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[52] = { 0 };
	int al[26] = { 0 };

	int max = 0, len;

	while (fgets(str, 52, stdin)!=NULL)
	{
		len = (int)strlen(str);
		for (int i = 0; i < len; i++)
		{
				
			if ( str[i] >= 'a' && str[i] <= 'z')
			{
				al[str[i] - 'a']++;
			}
		}
		
	}
	for (int i = 0; i < 26; i++)
	{
		if (al[i] >= max)
		{
			max = al[i];
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (al[i] == max)
		{
			printf("%c", i + 'a');
		}
	}
}