#include<stdio.h>
int main(void)
{
	int A, B;
	scanf("%d\n%d", &A,&B);
	printf("%d\n", A * (B % 10));
	printf("%d\n", A * ((B % 100)/10));
	printf("%d\n", A * (B / 100)); 
	printf("%d", A * B );
}