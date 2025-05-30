#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int cnt = 0;
void dfs(int node, const vector<vector<int> >& adj, vector<bool>& visited)
{
	visited[node] = true;
	for (const int& next : adj[node])
	{
		if (!visited[next])
		{
			dfs(next, adj, visited);
			cnt++;
		}
	}
}
int main(void)
{
	int n, m, u, v;
	scanf("%d\n%d", &n, &m);

	vector<vector<int> > adj(n);
	vector<bool> visited(n, false);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		adj[u - 1].push_back(v - 1);
		adj[v - 1].push_back(u - 1);
	}
	dfs(0, adj, visited);
	printf("%d", cnt);
}