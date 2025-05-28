#include<vector>
#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
int n, m;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
void bfs(int start_row, int start_col, vector<vector<int> >& dist, vector<vector<int> >& map, vector<vector<bool> >& visited)
{
	queue<pair<int, int> > q;
	int cx, cy;
	visited[start_row][start_col] = true;
	dist[start_row][start_col] = 0;
	q.push({ start_row, start_col });

	while (!q.empty())
	{
		cx = q.front().first;
		cy = q.front().second;
		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cx + dx[dir];
			int ny = cy + dy[dir];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				if (!visited[nx][ny] && map[nx][ny])
				{
					visited[nx][ny] = true;
					dist[nx][ny] = dist[cx][cy] + 1;
					q.push({ nx, ny });
				}
			}
		}
	}
}
int main(void)
{
	int num, start_row, start_col;
	scanf("%d %d", &n, &m);

	vector<vector<int> > map(n, vector<int>(m));
	vector<vector<int> > dist(n, vector<int>(m, -1));
	vector<vector<bool> > visited(n, vector<bool>(m, false));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &num);
			map[i][j] = num;
			if (num == 2)
			{
				start_row = i;
				start_col = j;
			}
			if (num == 0)
			{
				dist[i][j] = 0;
			}
		}
	}
	bfs(start_row, start_col, dist, map, visited);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", dist[i][j]);
		}
		printf("\n");
	}
}