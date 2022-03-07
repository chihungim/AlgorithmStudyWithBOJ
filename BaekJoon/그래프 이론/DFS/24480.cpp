#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, r;

vector<int> adj[100001];
int visited[100001] = { 0, };
int cnt = 1;

void dfs(int n) {
	visited[n] = cnt++;
	for (const auto& next : graph[n]) {
		if (!visited[next]) {
			dfs(next);
		}
	}
}

int main() {
	cin >> n >> m >> r;
	for (int i = 0; i < m; i++) {
		int v, u;
		cin >> v >> u;
		graph[v].push_back(u);
		graph[u].push_back(v);
	}

	for (auto& a : graph) 
		sort(a.begin(), a.end(), greater<int>());

	dfs(r);

	for (int i = 1; i <= n; i++) {
		cout << visited[i] << "\n";
	}

	return 0;
}