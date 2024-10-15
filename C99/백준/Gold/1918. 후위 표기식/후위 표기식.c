#include<stdio.h>
#define MAX 101
#include<stdlib.h>
typedef char Element;
Element data[MAX];
int top = -1;

void init_stack()
{
	top = -1;
}
int is_full()
{
	if (top == MAX - 1)
		return 1;
	else
		return 0;
}
int is_empty()
{
	if (top == - 1)
		return 1;
	else
		return 0;
}
int size()
{
	return top + 1;
}
void push(Element e)
{
	if (is_full())
	{
		exit(1);
	}
	else
	{
		top += 1;
		data[top] = e;
	}
}
Element pop()
{
	if (is_empty())
	{
		exit(1);
	}
	else
	{
		return data[top--];
	}
}
Element peek()
{
	if (is_empty())
	{
		return -2;
	}
	else
	{
		Element c = data[top];
		return c;
	}
}
int precedence(char op)
{
	switch (op)
	{
	case('('):case(')'):return 0; 
	case('-'):case('+'):return 1;
	case('*'):case('/'):return 2;
	}
	return -1;
}
void infix_to_postfix(char expr[])
{
	init_stack();
	int i = -1;
	while (expr[++i] != '\0')
	{
		char term = expr[i];
		if (term <= 'Z' && term >= 'A')
		{
			printf("%c", term);
		} 
		else if (term == '(')
		{
			push(term);
		}
		else if (term == ')')
		{
			Element e='0';
			while(1)
			{
				e = pop();
				if (e == '(')
					break;
				printf("%c", e);

			}
		}
		else if (term == '+' || term == '-' || term == '*' || term == '/')
		{
			if (is_empty())
			{
				push(term);
				continue;
			}
			while (precedence(peek()) >= precedence(term))
			{
				if (peek() == -2)
					continue;
				Element e = pop();
				printf("%c", e);
			}
			push(term);
		}
		
	}
	while (!is_empty())
	{
	 	Element e = pop();
		printf("%c", e);
	}
}
int main(void)
{
	scanf("%s", data);
	infix_to_postfix(data);
}