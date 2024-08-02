#include<stdio.h>
#include<string.h>
int main(void)
{
	int n, num = 0, len = 0;
	char str1[21] = { 0 }, str2[21] = { 0 };

	scanf("%d\n", &n);

	for (int i = 0; i < n; i++)
	{
		scanf(" %s %s", str1, str2);

		len = (int)strlen(str1);

		printf("Distances: ");
		for (int idx = 0; idx < len; idx++)
		{
			if(str1[idx]<=str2[idx])
				num = str2[idx] - str1[idx];
			else
			{
				num = str2[idx] + 26 - str1[idx];
			}
			printf("%d ", num);
		}
		printf("\n");
	}
}