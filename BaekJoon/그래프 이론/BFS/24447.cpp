#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define ll long long

using namespace std;

vector<int> graph[100001];
ll depth[100001];
ll dist[100001];

int main(int argc, char* argv[])
{
	fill(begin(depth), end(depth), -1);

	int n, m, r, _depth = 0, _dist = 1;
	cin >> n >> m >> r;

	for (int i = 0; i < m; i++)
	{
		int u, v; cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (auto& g : graph)
		sort(g.begin(), g.end());

	queue<pair<int, int>> q;
	depth[r] = _depth;
	dist[r] = _dist++;
	q.push({ r,_depth });
	
	while (!q.empty())
	{
		int from = q.front().first;
		int d = q.front().second;
		q.pop();
		for (const auto to : graph[from])
			if (depth[to] == -1)
			{
				depth[to] = d + 1;
				dist[to] = _dist++;
				q.push({ to, d + 1 });
			}
	}

	ll sum = 0;
	for (int i = 1; i <= n; i++)
		sum += depth[i] * dist[i];
	cout << sum << "\n";
	return 0;
}
