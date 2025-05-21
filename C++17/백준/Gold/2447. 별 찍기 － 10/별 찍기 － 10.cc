#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
void recursive_blank(vector<string>& star, int size, int r, int c)
{
	for (int i = r; i < r + size; i++)
	{
		for (int j = c; j < c + size; j++)
		{
			star[i][j] = ' ';
		}
	}
	return;
}
void recursive_star(vector<string>& star, int size, int r, int c)
{
	if (size == 3)
	{
		for (int i = r; i < r + 3; i++)
		{
			for (int j = c; j < c + 3; j++)
			{
				if(i==r+1 && j==c+1)
					star[i][j] = ' ';
				else
					star[i][j] = '*';
			}
		}
		return;
	}
	for (int i = r; i < r + size; i += size / 3)
	{
		for (int j = c; j < c + size; j += size / 3)
		{
			if(i == r + size / 3 && j == c + size / 3)
				recursive_blank(star, size / 3, i, j);
			else
				recursive_star(star, size / 3, i, j);
		}
	}
}
int main(void)
{
	int n;
	void recursive_star(vector<string>& star, int size, int r, int c);
	
	scanf("%d", &n);
	vector<string> star(n, string(n, ' '));

	recursive_star(star, n, 0, 0);

	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < n; j ++)
		{
			printf("%c", star[i][j]);
		}
		printf("\n");
	}
}