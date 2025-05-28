#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

void dfs(int node, vector<vector<int> >& adj, vector<bool>& visited)
{
	visited[node] = true;
	for (const int& num : adj[node])
	{
		if (!visited[num])
		{
			dfs(num, adj, visited);
		}
	}
}
int connected_component(vector<vector<int> >& adj, vector<bool>& visited)
{
	int cnt = 0;
	for (int i = 0; i < visited.size(); i++)
	{
		if (!visited[i])
		{
			dfs(i, adj, visited);
			cnt++;
		}
	}
	return cnt;
}
int main(void)
{
	int n, m, u, v;
	scanf("%d %d", &n, &m);
	vector<vector<int> > adj(n);
	vector<bool > visited(n, false);

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		adj[u - 1].push_back(v - 1);
		adj[v - 1].push_back(u - 1);
	}
	int cnt = connected_component(adj, visited);
	printf("%d", cnt);
}