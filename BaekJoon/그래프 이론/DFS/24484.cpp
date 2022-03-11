#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#define ll  long long

using namespace std;

vector<int> graph[100001];
ll _depth[100001] = { 0, };
ll _dis[100001] = { 0, };

int main() {
	fill(begin(_depth), end(_depth), -1);

	int n, m, r, order = 1;
	cin >> n >> m >> r;

	function<void(int, int)> dfs = [&](int cur, int depth) {
		_depth[cur] = depth;
		_dis[cur] = order++;
		for (const auto& next : graph[cur]) {
			if (_depth[next] == -1)
				dfs(next, depth + 1);
		}
	};

	for (int i = 0; i < m; i++) {
		int v, u;  cin >> v >> u;
		graph[v].push_back(u);
		graph[u].push_back(v);
	}

	for (auto& g : graph) sort(g.begin(), g.end(), greater<int>());

	dfs(r, 0);

	ll sum = 0;
	for (int i = 1; i <= n; i++)
		sum += _dis[i] * _depth[i];

	cout << sum;

	return 0;
}