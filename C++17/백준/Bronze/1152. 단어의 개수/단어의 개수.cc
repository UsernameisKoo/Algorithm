#include<stdio.h>
int main(void)
{
	char eng[1000000];
	int num = 1,len=0,zero=0;
	scanf("%[^\n]s", eng, 1000000);
	for (int i = 0;; i++)
	{
		if (eng[i] == false)
			break;
		len++;
	}
	len--;
	if (len == 0 && eng[0]==' ')
		printf("%d",zero);
	else
	{
		for (int i = 1; i < len; i++)
		{
			if (eng[i] == ' ')
				num++;
		}
		printf("%d", num);
	}
}