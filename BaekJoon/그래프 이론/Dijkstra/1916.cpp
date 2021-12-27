#include <iostream>
#include <vector>
#include <queue>


constexpr int INF = 1000000000;

using namespace std;

int n, e;
int dep, arv;
//int path[2][20001] = { {0,}, };  //거리,방문여부
vector<pair<int, int>> edge[1001];
int dist[1001] = { 0, };

void dijkstra();

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cin >> n >> e;

	for (int i = 1; i <= n; i++)
		dist[i] = INF;

	for (int i = 0; i < e; i++)
	{
		int v, u, dis;
		cin >> v >> u >> dis;
		edge[v].push_back({ u,dis });
		//edge[u].push_back({ v,dis });
	}

	cin >> dep >> arv;

	dijkstra();

	cout << dist[arv] << "\n";

}

void dijkstra()
{
	priority_queue<pair<int, int>> pq;
	dist[dep] = 0;
	pq.push({ 0,dep });

	while (!pq.empty())
	{
		const int cost = -pq.top().first;
		const int cur = pq.top().second;
		pq.pop();
		if (dist[cur] < cost) continue;
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
