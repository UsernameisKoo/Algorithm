#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int n, answer = 0;
vector<int> board;
bool isSafe(int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (abs(board[i] - col) == row - i || board[i] == col)
			return false;
	}
	return true;
}
void solve(int row)
{
	if (row == n)
	{
		answer++;
		return;
	}

	for (int col = 0; col < n; col++)
	{
		if (isSafe(row, col))
		{
			board[row] = col;
			solve(row + 1);
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	board.resize(n);
	solve(0);
	
	cout << answer;
}