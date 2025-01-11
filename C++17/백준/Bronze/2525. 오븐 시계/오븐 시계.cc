#include<stdio.h>
int main(void)
{
	int A, B, C;
	scanf("%d %d\n%d", &A, &B, &C);
	if ((B + C % 60) >= 60)
		printf("%d %d", (A + C / 60 + 1)%24, (B + C % 60) % 60);
	else
		printf("%d %d", (A + C / 60)%24, B + C % 60);

}