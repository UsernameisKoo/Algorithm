#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n, m;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int cnt = 0;
void bfs(int x, int y, vector<vector<int> >& dist, vector<vector<char> >& map, vector<vector<bool> >& visited)
{
	queue<pair<int, int> > q;
	dist[x][y] = 1;
	visited[x][y] = true;
	q.push({ x, y });


	while (!q.empty())
	{
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		cnt++;
		if (cx == n - 1 && cy == m - 1)
			break;
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cx + dx[dir];
			int ny = cy + dy[dir];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				if (!visited[nx][ny] && map[nx][ny] == '1')
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
	char pos = 0;
	scanf("%d %d", &n, &m);
	vector<vector<char> > map(n, vector<char>(m));
	vector<vector<int> > dist(n, vector<int>(m));

	vector<vector<bool> > visited(n, vector<bool>(m, false));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf(" %c", &pos, 1);
			map[i][j] = pos;
		}
	}
	bfs(0, 0, dist, map, visited);
	printf("%d", dist[n - 1][m - 1]);
}