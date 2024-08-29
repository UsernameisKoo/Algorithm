#include<stdio.h>
#include<string.h>
int main(void)
{
	int len1,len2, t, result = 0;
	char s1[101] = { 0 }, s2[101] = { 0 }, temp1[101] = { 0 }, temp2[101] = { 0 };

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		result = 0;
		scanf(" %s %s",s1,s2);
		len1 = (int)strlen(s1);
		len2 = (int)strlen(s2);
		strncpy(temp1, s1, len1 + 1);
		strncpy(temp2, s2, len2 + 1);
		if (len1 != len2 && result == 0)
		{
			printf("%s & %s are NOT anagrams.\n", s1, s2);
			result = 1;
			continue;
		}
		for (int x = 0; x < len1; x++)
		{
			for (int y = 0; y < len2; y++)
			{
				if (s1[x] == s2[y])
				{
					s1[x] = '0';
					s2[y] = '0';
					break;
				}
			}
		}
		for (int y = 0; y < len2; y++)
		{
			if (s2[y] != '0' && result == 0)
			{
				printf("%s & %s are NOT anagrams.\n", temp1, temp2);
				result = 1;
				break;
			}
		}
		for (int x = 0; x < len1; x++)
		{
			if (s1[x] != '0' && result == 0)
			{
				printf("%s & %s are NOT anagrams.\n", temp1, temp2);
				result = 1;
			}
			break;
		}
		if (result == 0)
		{
			printf("%s & %s are anagrams.\n", temp1, temp2);
		}
		
	}
	
	
}