#include <iostream>
#include <vector>
#include <queue>


constexpr int INF = 10000000;

using namespace std;

int n, m, x;
//int path[2][20001] = { {0,}, };  //거리,방문여부
vector<pair<int, int>> edge[20001];
int dist[20001] = { 0, };
int resdist[1001];
void dijkstra(int s);

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;
	cin >> x;




	for (int i = 0; i < m; i++)
	{
		int v, u, dis;
		cin >> v >> u >> dis;
		edge[v].push_back({ u,dis });
	}

	for(int i = 1; i<=n; i++)
	{
		dijkstra(i);
		resdist[i] = dist[x];
	}

	dijkstra(x);

	int res = 0;
	for (int i = 1; i <= n; i++) {
		resdist[i] += dist[i];
		res = max(res, resdist[i]);
	}

	cout << res;
}

void dijkstra(int s)
{
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	priority_queue<pair<int, int>> pq;
	dist[s] = 0;
	pq.push({ 0,s });

	while (!pq.empty())
	{
		const int cost = -pq.top().first;
		const int from = pq.top().second;
		pq.pop();

		for (auto& to : edge[from])
		{
			int Next = to.first;
			int nCost = to.second;

			if (dist[Next] > cost + nCost)
			{
				dist[Next] = cost + nCost;
				pq.push(make_pair(-dist[Next], Next));
			}
		}
	}
}



