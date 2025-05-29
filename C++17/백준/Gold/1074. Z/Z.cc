#include<stdio.h>
#include<cmath>
#include<vector>
using namespace std;

int cnt = 0;
int main(void)
{
	int n, r, c;
	//아래 4칸 32 오 4칸 16
	scanf("%d %d %d", &n, &r, &c);

	int nn = n - 1;
	int col = (int)pow(2, nn);
	if (nn == 0)
		col = 0;
	int col_num = col * col;
	int tmp = col;
	while (!(col == c || col == c - 1))
	{
		if (c > col)
		{
			nn--;
			if (nn == 0)
			{
				col -= 2; col_num -= 4; break;
			}
			tmp = tmp / 2;
			
			col += tmp;
			col_num += tmp * tmp;
		}
		else
		{
			nn--;
			if (nn == 0)
			{
				col -= 2; col_num -= 4; break;
			}

			tmp = tmp / 2;
			col -= tmp;
			col_num -= tmp * tmp * 3;
		}
		
	}
	nn = n - 1;
	int row = (int)pow(2, nn);
	if (nn == 0)
		row = 0;
	int row_num = row * row * 2;
	tmp = row;
	while (!(row == r || row == r - 1))
	{
		if (r > row)
		{
			nn--;
			if (nn == 0)
			{
				row -= 2; row_num -= 8; break;
			}
			tmp = tmp / 2;
			row += tmp;
			row_num += tmp * tmp * 2;
		}
		else
		{
			nn--;
			if (nn == 0)
			{
				row -= 2; row_num -= 8; break;
			}
			tmp = tmp / 2;
			row -= tmp;
			row_num -= tmp * tmp * 6;
		}

	}
	cnt = row_num + col_num;
	if (row < r && col < c)
		cnt += 3;
	else if(row < r && col == c)
		cnt += 2;
	else if (row == r && col < c)
		cnt += 1;


	printf("%d", cnt);
}