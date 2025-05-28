#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

void dfs(int node, vector<vector<int> >& adj, vector<bool>& visited)
{
	visited[node] = true;
	printf("%d ", node + 1);
	for (const int& num : adj[node]) {
		if (!visited[num])
			dfs(num, adj, visited);
	}

}
void bfs(int node, vector<vector<int> >& adj, vector<bool>& visited)
{
	queue<int> q;
	q.push(node);
	visited[node] = true;
	while (!q.empty())
	{
		int node = q.front(); q.pop();
		printf("%d ", node + 1);
		for (const int& next : adj[node])
		{
			if (!visited[next]) {
				visited[next] = true;
				q.push(next);
			}
		}
	}
	
}
int main(void)
{
	int n, m, start;
	int u, v;
	scanf("%d %d %d", &n, &m, &start);

	vector<vector<int> > adj(n);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		adj[u - 1].push_back(v - 1);
		adj[v - 1].push_back(u - 1);
	}
	for (int i = 0; i < n; i++)
	{
		sort(adj[i].begin(), adj[i].end());
	}

	vector<bool>visited(n, false);
	dfs(start - 1, adj, visited);

	printf("\n");

	fill(visited.begin(), visited.end(), false);
	bfs(start - 1, adj, visited);
}