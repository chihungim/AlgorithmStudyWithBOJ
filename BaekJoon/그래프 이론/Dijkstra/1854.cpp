#include <iostream>
#include <queue>
#include <vector>

using namespace std;

constexpr int INF = 100000000;

int n, m, k;

//todo: 미해결 문제

vector<pair<int, int>> vertex[1001];
int dist[1001] = {0,};

void dijkstra();



int main(int argc, char* argv[])
{
	fill(begin(dist), end(dist), INF);
	cin >> n >> m >> k;
	for(int i = 0; i<m; i++)
	{
		int v, u, cost;
		cin >> v >> u >> cost;
		vertex[v].push_back({u,cost});
	}

	dijkstra();

	for(int i = 1; i<=n; i++)
	{
		cout << dist[i] << "\n";
	}
	
}

void dijkstra()
{
	priority_queue<pair<int, int>> pq;
	dist[k] = 0;
	pq.push({ 0,k }); //cost ,

	while(!pq.empty())
	{
		const int cost = -pq.top().first;
		const int cur = pq.top().second;
		pq.pop();
		if (dist[cur] < cost) continue;
		for (auto& i : vertex[cur])
		{
			int next = i.first;
			int n_cost = i.second;
			if(dist[next] > cost + n_cost)
			{
				dist[next] = cost + n_cost;
				pq.push({-dist[next], cost});
			}
		}
	}
}

