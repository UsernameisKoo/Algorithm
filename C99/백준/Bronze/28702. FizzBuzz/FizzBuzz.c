#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char str[10] = { 0 };
	int now;

	for (int i = 0; i < 3; i++)
	{
		fgets(str, 10, stdin);

		if (str[0] <= '9' && str[0] >= '0')
		{
			now = atoi(str);
			if (i == 0)
			{
				now += 3;
				
			}
			else if (i == 1)
			{
				now += 2;
			}
			else
			{
				now += 1;
			}
		}


	}

	if (now % 3 == 0 && now % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (now % 3 == 0 && now % 5 != 0)
	{
		printf("Fizz");
	}
	else if (now % 3 != 0 && now % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", now);
	}

	return 0;
}