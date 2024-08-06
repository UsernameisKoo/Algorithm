#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	long long t;
	scanf("%lld\n", &t);

	for (long long i = 0; i < t; i++)
	{
		char n1[44] = { 0 }, n2[44] = { 0 }, op, answer[22] = { 0 };
		long long result = 0;

		scanf(" %s %c %s = %s", n1, &op, n2, answer);
		switch (op)
		{
		case('+'):result = atoll(n1) + atoll(n2); break;
		case('-'):result = atoll(n1) - atoll(n2); break;
		case('*'):result = atoll(n1) * atoll(n2); break;
		case('/'):result = atoll(n1) / atoll(n2); break;
		}
		if (atoll(answer) != result)
		{
			printf("wrong answer\n");
		}
		else
		{
			printf("correct\n");
		}
	}
}