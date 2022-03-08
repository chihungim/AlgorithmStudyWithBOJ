#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

vector<int> graph[100001];
int visited[100001] = { 0, };

int main() {
	fill(begin(visited), end(visited), -1);
	
	int n, m, r;
	cin >> n >> m >> r;

	function<void(int, int)> dfs = [&](int cur, int depth) {
		visited[cur] = depth;
		for (const auto& next : graph[cur]) {
			if (visited[next] == -1)
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

	for (int i = 1; i <= n; i++) {
		cout << visited[i] << "\n";
	}

	return 0;
}