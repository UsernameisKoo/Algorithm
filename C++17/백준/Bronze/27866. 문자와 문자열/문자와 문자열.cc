#include<stdio.h>
int main(void)
{
	char S[1001];
	int i;
	scanf("%s", S,sizeof(S));
	scanf("%d", &i);
	printf("%c", S[i-1]);
}