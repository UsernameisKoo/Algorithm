#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void)
{
	char s[32] = { 0 };
	int n,len;
	int result = 0;
	scanf(" %s %d", s, &n);


	len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		int digit=0;

		if ('A' <= s[i] && s[i] <= 'Z')
		{
			digit = s[i] - 'A' + 10;
		}
		if ('0' <= s[i] && s[i] <= '9')
		{
			digit = s[i]-'0';
		}

		result += digit*(int)pow(n, len - i - 1);
	}
	
	printf("%d", result);
	return 0;
}