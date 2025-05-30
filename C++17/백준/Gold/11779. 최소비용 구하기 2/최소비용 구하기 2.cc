#include<stdio.h>
#include<vector>
#include<queue>
#include<limits.h>
#include<algorithm>
using namespace std;

const int max_int = INT_MAX;

void bfs(int start, const vector<vector<pair<int, int> > >& graph, vector<int >& dist, vector<int>& parent)
{
	int current_dist, current_node, next_node, next_weight, next_dist;
	priority_queue <pair<int,int> > max_heap;
	max_heap.push({0, start});
	dist[start] = 0;
	parent[start] = -1;

	while (!max_heap.empty())
	{
		current_dist = max_heap.top().first;
		current_node = max_heap.top().second;

		max_heap.pop();

		if (current_dist > dist[current_node])
			continue;
		for (auto& edge : graph[current_node])
		{
			next_node = edge.first;
			next_weight = edge.second;
			next_dist = next_weight + current_dist;
			if (next_dist < dist[next_node])
			{
				max_heap.push({ next_dist, next_node });
				dist[next_node] = next_dist;
				parent[next_node] = current_node;
			}
		}

	}

}
int main(void)
{
	int n, m, u, v, w, start, end;
	scanf("%d\n%d", &n, &m);

	vector<vector<pair<int, int> > > graph(n);
	vector<int> dist(n, max_int);
	vector<int> parent(n, -1);
	vector<int> path;
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &u, &v, &w);
		graph[u - 1].push_back({ v - 1, w });
	}

	scanf("%d %d", &start, &end);

	bfs(start - 1, graph, dist, parent);

	for (int cur = end - 1; cur != -1; cur = parent[cur])
	{
		path.push_back(cur);
	}
	reverse(path.begin(), path.end());

	printf("%d\n", dist[end - 1]);
	printf("%d\n", (int)path.size());
	for (int i = 0; i < path.size(); i++)
	{
		printf("%d ", path[i] + 1);
	}
}