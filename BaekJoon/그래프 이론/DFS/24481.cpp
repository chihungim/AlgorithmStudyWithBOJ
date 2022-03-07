#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, r;

vector<int> graph[100001];
int visited[100001] = { 0, };

void dfs(const int cur, int depth) {
	visited[cur] = depth;
	for (const auto& next : graph[cur]) {
		if (visited[next] == -1)  
			dfs(next, depth + 1);
	}
}

int main() {

	cin >> n >> m >> r;

	fill(begin(visited), end(visited), -1);

	for (int i = 0; i < m; i++) {
		int v, u;  cin >> v >> u;
		graph[v].push_back(u);
		graph[u].push_back(v);
	}

	for (auto& g : graph) sort(g.begin(), g.end());
	
	dfs(r, 0);

	for (int i = 1; i <= n; i++) {
		cout << visited[i] << "\n";
	}

	return 0;
}