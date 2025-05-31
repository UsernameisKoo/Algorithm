#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<limits.h>
using namespace std;

int max_int = INT_MAX;
void bfs(int start, const vector<vector<pair<int, int> > >& graph, vector<int>& dist)
{
	int current_node, current_dist, next_node, next_weight, next_dist;
	priority_queue<pair<int, int>, vector<pair<int,int> >, greater<pair<int,int> > > p_q;
	p_q.push({ 0, start });
	dist[start] = 0;

	while (!p_q.empty())
	{
		current_node = p_q.top().second;
		current_dist = p_q.top().first;
		p_q.pop();
		if (current_dist > dist[current_node])
			continue;

		for (auto& edge : graph[current_node])
		{
			next_node = edge.first;
			next_weight = edge.second;
			next_dist = next_weight + current_dist;
			if (next_dist < dist[next_node])
			{
				dist[next_node] = next_dist;
				p_q.push({ next_dist, next_node });
			}
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, e, k, u, v, w;
	cin >> n >> e;
	cin >> k;

	vector<vector<pair<int, int> > > graph(n);
	vector<int> dist(n, max_int);

	for (int i = 0; i < e; i++)
	{
		cin >> u >> v >> w;
		graph[u - 1].push_back({ v - 1, w });
	}
	bfs(k - 1, graph, dist);
	for (int i = 0; i < n; i++)
	{
		if(dist[i] != max_int)
			cout << dist[i];
		else
			cout << "INF";
		cout << "\n";
	}
}