#include<stdio.h>
int main(void)
{
	char pgh;
	while (scanf("%c", &pgh) != -1) // != EOF (End Of File) -> 입력이 더 없는 것
	{
		printf("%c", pgh);
	}
}