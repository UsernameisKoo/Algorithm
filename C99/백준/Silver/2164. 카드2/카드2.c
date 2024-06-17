#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int index = 0, top = n - 1;
	int* stack = (int*)malloc(sizeof(int) * 2*n);
	for (int i = 0; i < n; i++)
	{
		if (stack == NULL)
		{
			exit(1);
		}
		else
		{
			*(stack + i) = i + 1;
		}
		
	}
	for (int i = 0; index != top; i++)
	{
		if (i % 2 == 0)
		{
			index++;
		}
		else
		{
			*(stack + ++top) = *(stack + index++);
		}
	}
	if (stack == NULL)
	{
		exit(1);
	}
	else
	{
		printf("%d", *(stack + index));
	}

	free(stack);
}