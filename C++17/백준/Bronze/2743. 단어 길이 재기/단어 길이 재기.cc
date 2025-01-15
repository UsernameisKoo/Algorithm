#include<stdio.h>
int main(void)
{
	int num = 0;
	char eng[100];
	scanf("%s", eng,sizeof(eng));
	for(int i=0;i<100;i++)
	{
		if (eng[i] == false)
			break;
		num++;
	}
	printf("%d", num);
}