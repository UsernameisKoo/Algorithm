#include<stdio.h>
#include<string.h>
int main(void)
{
	int t, r=0,j=0;
	char s[20];
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{ 
		scanf("%d %s", &r, s,20);
		for (int j = 0; j < strlen(s); j++)
		{
			for (int x = 0; x < r; x++)
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
}