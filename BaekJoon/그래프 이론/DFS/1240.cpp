#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> tree[1001]; //first node, second distance
bool visited[1001];
int n,m;

int currentdist = 0;

void dfs(int from, int dest, int dist) {
	visited[from] = true;
	if (from == dest) currentdist = dist;
	for (auto& t : tree[from]) {
		if (visited[t.first]) continue;
		dfs(t.first, dest, dist + t.second);
	}
}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	//start...
	cin >> n >> m;

	for (int i = 0; i < n-1; i++) {
		int u, v, dis; cin >> u >> v >> dis;
		tree[u].push_back({ v,dis });
		tree[v].push_back({ u,dis });
	}

	for (int i = 0; i < m; i++) {
		fill(begin(visited), end(visited), false);
		currentdist = 0;
		int node1, node2;
		cin >> node1 >> node2;
		dfs(node1, node2,0);
		cout << currentdist << '\n';
	}

	return 0;
}