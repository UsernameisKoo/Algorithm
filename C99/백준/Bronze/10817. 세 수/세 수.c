#include<stdio.h>
int main(void)
{
	int a[3];
	
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		int least = i;
		for (int j = i + 1; j < 3; j++)
		{
			if (a[least] >= a[j])
				least = j;
		}
		int temp = a[i];
		a[i] = a[least];
		a[least] = temp;
	}
	printf("%d", a[1]);


}