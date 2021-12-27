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
	
	cin >> n >> e;
	cin >> k;

	
	for (int i = 1; i <= n; i++)
		dist[i] = INF;

	for(int i  = 0; i<e; i++)
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

//void dijkstra();
//
//int main()
//{
//	cin >> n >> e;
//	cin >> k;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = i + 1; j <= n; j++)
//			adjMap[i][j] = adjMap[j][i] = INF;
//
//
//	for (int i = 0; i < e; i++)
//	{
//		int n = 0, u = 0;
//		cin >> n >> u;
//		cin >> adjMap[n][u]; //간선 수치
//		adjMap[u][n] = adjMap[n][u];
//	}
//
//
//	dijkstra();
//
//
//	for (int i = 1; i <= n; i++)
//	{
//			cout << path[0][i] << "\n";
//	}
//}
//
//void dijkstra()
//{
//	for (int i = 1; i <= n; i++)
//		path[0][i] = adjMap[k][i];
//
//	path[1][k] = true;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int min = 2147483647, idx = 0;
//		for (int j = 1; j <= n; j++)
//			if (path[0][j] < min && !path[1][j])
//			{
//				min = path[0][j];
//				idx = j;
//			}
//		path[1][idx] = true;
//		const int from = idx;
//
//		for (int to = 1; to <= n; to++)
//		{
//			if (!path[1][to] && path[0][from] + adjMap[from][to] < path[0][to])
//				path[0][to] = path[0][from] + adjMap[from][to];
//		}
//	}
//}

