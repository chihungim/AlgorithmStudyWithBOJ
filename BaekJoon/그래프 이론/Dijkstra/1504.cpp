#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define ll long long 
constexpr int INF = 100000000;

using namespace std;

int n, e, v1, v2;
ll len = INF;
vector<pair<int, int>> edge[801];
int dist[801] = { 0, };

void dijkstra(int dep);

// s-> v1 -> v2 -> n
// s -> v2 -> v1 -> n

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	cin >> n >> e;

	while(e--){
		int v, u, cost;
		cin >> v >> u >> cost;
		edge[v].emplace_back(u,cost);
		edge[u].emplace_back(v, cost);
	}

	cin >> v1 >> v2;
	
	//dep to v1
	dijkstra(1);

	ll dep_v1 = dist[v1];
	ll dep_v2 = dist[v2];

	//v1 to v2 (둘의 거리는 똑같을 것 (무방향임))
	//v1 to n
	dijkstra(v1);
	ll v1_v2 = dist[v2];
	ll v1_n = dist[n];

	//v2 to n
	dijkstra(v2);
	ll v2_n = dist[n];

	len = min(dep_v2 + v1_v2 + v1_n, dep_v1 + v1_v2 + v2_n); 

	if (v1_v2 == INF || len == INF)
		cout << -1;
	else
		cout << len;
}

void dijkstra(int dep)
{
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	
	priority_queue<pair<int, int>> pq;
	dist[dep] = 0;
	pq.push({ 0,dep });

	while (!pq.empty())
	{
		const int cost = -pq.top().first;
		const int cur = pq.top().second; 
		pq.pop();
		
		for (auto& i : edge[cur])
		{
			int next = i.first;
			int n_cost = i.second;
			if (dist[next] > cost + n_cost)
			{
				dist[next] = cost + n_cost;
				pq.push(make_pair(-dist[next], next));
			}
		}
	}
}
