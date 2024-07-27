#include<stdio.h>
#include<string.h>
int main(void)
{
	int n, len;
	char k[61] = { 0 };
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", &k);
		len = (int)strlen(k);
		if (k[len - 1] % 2)
			printf("odd\n");
		else
			printf("even\n");
	}
	return 0;
}