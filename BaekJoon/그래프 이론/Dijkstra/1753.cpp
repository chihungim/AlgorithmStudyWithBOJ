#include <iostream>
#include <vector>
#include <queue>


constexpr int INF = 10000000;

using namespace std;

int n, e, k;
//int path[2][20001] = { {0,}, };  //거리,방문여부
vector<pair<int, int>> edge[20001];
int dist[20001] = { 0, };

void dijkstra();

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	cin >> n >> x;
	cin >> k;

	
	for (int i = 1; i <= n; i++)
		dist[i] = INF;

	for(int i  = 0; i<x; i++)
	{
		int v, u,dis;
		cin >> v >> u >> dis;
		edge[v].push_back({ u,dis });
		//edge[u].push_back({ n,dis });
	}

	dijkstra();

	for(int i = 1; i<=n; i++)
	{
		if (dist[i] == INF)
			cout << "INF\n";
		else
			cout << dist[i] << "\n";
	}
	
}

void dijkstra()
{
	priority_queue<pair<int, int>> pq;
	dist[k] = 0;
	pq.push({ 0,k });
	
	while(!pq.empty())
	{
		const int cost = -pq.top().first;
		const int cur = pq.top().second;
		pq.pop();
		//if (dist[cur] < cost) continue;
		for (int i = 0; i < edge[cur].size(); i++)
		{
			int Next = edge[cur][i].first;
			int nCost = edge[cur][i].second;

			if (dist[Next] > cost + nCost)
			{
				dist[Next] = cost + nCost;
				pq.push(make_pair(-dist[Next], Next));
			}
		}
	}
}



