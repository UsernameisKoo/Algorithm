#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[22] = { 0 };

	while (1)
	{
		int cnt_v = 0, total = 0, len = 0, result = 1, cnt_c = 0;
		char c = '\0';

		fgets(str, 22, stdin);

		if (strcmp(str, "end\n") == 0)
		{
			break;
		}

		len = (int)strlen(str) - 1;
		str[len] = '\0';

		for (int i = 0; i < len; i++)
		{
			

			switch (str[i])
			{
				case('a'):
				{
					if (c == 'a')
					{
						result = 0;
					}
					cnt_v++;
					total++;
					cnt_c = 0;
					c = str[i];
					break;
				}
				
				case('e'):
				{
					cnt_v++;
					total++;
					cnt_c = 0;
					c = str[i];
					break;
				}
				case('i'):
				{
					if (c == 'i')
					{
						result = 0;
					}
					cnt_v++;
					total++;
					cnt_c = 0;
					c = str[i];
					break;
				}
				case('o'):
				{
					cnt_v++;
					total++;
					cnt_c = 0;
					c = str[i];
					break;
				}
				case('u'):
				{
					if (c == 'u')
					{
						result = 0;
					}
					cnt_v++;
					total++;
					cnt_c = 0;
					c = str[i];
					break;
				}
				default:
				{
					if (c == str[i])
					{
						result = 0;
					}
					cnt_v = 0;
					cnt_c++;
					c = str[i];
					break;
				}
			}
			
			if (cnt_c >= 3 || cnt_v >= 3)
			{
				result = 0;
				break;
			}
		}
		if (total == 0)
			result = 0;

		
		if (result)
			printf("<%s> is acceptable.\n", str);
		else
			printf("<%s> is not acceptable.\n", str);
	}
}