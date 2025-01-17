#include<stdio.h>
int main(void)
{
	int N,n=0,sum=0;
	char num[100];
	scanf("%d", &N);
	scanf("%s", num,sizeof(num));
	for (int i = 0; i < N; i++)
	{
		n=num[i]-'0';
		sum += n;
	}
	printf("%d", sum);
}