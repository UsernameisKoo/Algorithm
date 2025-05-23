#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int cnt = 0;
vector<int> visited;
vector<vector<int> > e;
void dfs(vector<int>& visited, vector<vector<int> >& e, int r) {
	// V : 정점 집합, E : 간선 집합, R : 시작 정점
	if (visited[r-1] == false)
	{
		cnt++;
		visited[r - 1] = cnt;
	}

	for (int x : e[r-1])
	{
		if (visited[x-1] == false)
			dfs(visited, e, x);
	}
}

int main(void)
{
	int n, m, r, u, v;
	scanf("%d %d %d", &n, &m, &r);
	visited.resize(n, 0);
	e.resize(n);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		e[u-1].push_back(v);
		e[v-1].push_back(u);
	}
	for (int i = 0; i < n; i++)
	{
		sort(e[i].begin(), e[i].end());
	}
	dfs(visited, e, r);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", visited[i]);
	}
}