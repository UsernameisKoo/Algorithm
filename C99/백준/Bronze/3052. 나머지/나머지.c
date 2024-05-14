#include<stdio.h>
int main(void)
{
	int num, remain[10],result=0,count;
	for (int line = 1; line < 11; line++) //num 10개 받기
	{
		scanf("%d", &num);
		remain[line - 1] = num%42;
	}
	for (int i = 0; i < 10; i++) //index 0~9까지
	{
		count = 0;
		for (int x = i + 1; x < 10; x++)
		{
			if (remain[i] == remain[x])
				count++;

		}
		if (count == 0)
			result++;
	}
	printf("%d", result);
}