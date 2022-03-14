#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> graph[100001];
int visited[100001];

int main(int argc, char* argv[])
{
	fill(begin(visited), end(visited), -1);

	int n, m, r, depth = 0;
	cin >> n >> m >> r;

	for (int i = 0; i < m; i++)
	{
		int u, v; cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	queue<pair<int, int>> q;
	visited[r] = depth;
	q.push({ r,depth });

	while (!q.empty())
	{
		int cur = q.front().first;
		int _depth = q.front().second;
		q.pop();
		for (const auto to : graph[cur])
			if (visited[to] == -1)
			{
				visited[to] = _depth + 1;
				q.push({ to, _depth + 1 });
			}
	}

	for (int i = 1; i <= n; i++)
		cout << visited[i] << "\n";

	return 0;
}
