#include<limits.h>
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

void dijkstr(int start, const vector<vector<pair<int, int> > >& graph, vector<int>& dist)
{
	int current_dist, current_node, next_weight, next_node, next_dist;
	dist[start] = 0;
	priority_queue<pair<int, int> > max_heap; // (거리, 노드)

	max_heap.push({ 0, start });

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

			next_dist = current_dist + next_weight;
			if (next_dist < dist[next_node])
			{
				dist[next_node] = next_dist;
				max_heap.push({ next_dist, next_node });
			}
		}
	}

}
int main(void)
{
	int max_int = INT_MAX;
	int n, m, u, v, w;
	int start, end;
	
	scanf("%d\n%d", &n, &m);
	vector<vector<pair<int,int> > > graph(n+1);
	vector<int> dist(n+1, INT_MAX);

	
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &u, &v, &w);
		graph[u].push_back({ v ,w });
	}
	
	scanf("%d %d", &start, &end);

	dijkstr(start, graph, dist);

	printf("%d", dist[end]);
}