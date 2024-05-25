#include<stdio.h>
int main(void)
{
	int num, top = -1, student = 1;
	int n[1000] = {0}, stack[1000] = {0};
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < num; i++)
	{
		if (n[i] != student)
		{
			top++;
			stack[top] = n[i];
		}
		else {
			student++;
		}

		while (top > -1) {
			if (stack[top] == student)
			{
				top--;
				student++;
			}
			else
			{
				break;
			}
		}
	}
	if (top == -1)
		printf("Nice");
	else
		printf("Sad");
	
	return 0;

}