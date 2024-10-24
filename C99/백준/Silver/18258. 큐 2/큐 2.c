#include<stdio.h>
#include<string.h>
#define Element int
#define MAX 2000000

Element data[MAX];
int front, rear;

void init()
{
	front = 0;
	rear = 0;
}
int empty()
{
	if (front == rear)
		return 1;
	else
		return 0;
}
int full()
{
	if (front == (rear + 1) % MAX)
		return 1;
	else
		return 0;
}
void push(Element x)
{
	if (full() == 0)
	{
		rear = (rear + 1) % MAX;
		data[rear] = x;
	}
}
Element pop()
{
	if (empty() == 0)
	{
		front = (front + 1) % MAX;
		return data[front];
	}
	return -1;
}
Element front_queue()
{
	if (empty() == 0)
	{
		return data[front+1];
	}
	else
	{
		return -1;
	}
}
Element back_queue()
{
	if (empty() == 0)
	{
		return data[rear];
	}
	else
	{
		return -1;
	}
}
int size()
{
	return (rear - front + MAX) % MAX;
}

int main(void)
{
	int n, e;
	char str[10] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		if (strcmp(str, "push")==0)
		{
			scanf("%d", &e);
			push(e);
		}
		else if (strcmp(str, "front") == 0)
		{
			printf("%d\n", front_queue());
		}
		else if (strcmp(str, "back") == 0)
		{
			printf("%d\n", back_queue());
		}
		else if (strcmp(str, "pop") == 0)
		{
			printf("%d\n", pop());
		}
		else if (strcmp(str, "size") == 0)
		{
			printf("%d\n", size());
		}
		else if (strcmp(str, "empty") == 0)
		{
			printf("%d\n", empty());
		}
	}
}