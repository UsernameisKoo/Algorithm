#include<stdio.h>
int main(void)
{
	int n, a[1000] ={0}, temp, min, index;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int j = 0; j < n; j++)
	{
		min = a[j];
		for (int i = j; i < n; i++)
		{
			if (min >= a[i])
			{
				min = a[i];
				index = i;
			}
		}
		temp = a[j];
		a[j] = min;
		a[index] = temp;
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}