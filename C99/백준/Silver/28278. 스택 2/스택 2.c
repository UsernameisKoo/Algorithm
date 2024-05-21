#include<stdio.h>
#define MAX_STACK 1000000

int stack[MAX_STACK];
int top = -1;

int IsFull() {
	if (top >= MAX_STACK - 1)
	{
		return 1;
	}
	return 0;
}

int IsEmpty() {
	if (top == -1)
	{
		return 1;
	}
	return 0;
}

int Push(int value) {
	if (!IsFull())
	{
		top++;
		stack[top] = value;
	}
}
int Pop() {
	if (!IsEmpty())
	{
		return stack[top--];
	}
	else {
		return -1;
	}
}
int main(void)
{
	int n, menu, value;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &menu);

		switch (menu)
		{
			case(1):
			{
				scanf("%d", &value);
				Push(value);
				break;
			}
			case(2):
			{
				printf("%d\n", Pop());
				break;
			}
			case(3):
			{
				printf("%d\n", top + 1);
				break;
			}
			case(4):
			{
				printf("%d\n",IsEmpty());
				break;
			}
			case(5):
			{
				if (!IsEmpty())
				{
					printf("%d\n",stack[top]);
				}
				else
				{
					printf("-1\n");
				}
				break;
			}
		}
	}
}