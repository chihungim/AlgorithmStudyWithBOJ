#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

constexpr auto MAX = 10001;

int n, m;
vector <int> graph[MAX];
vector <int> result;
bool visit[MAX];
int cnt;

void DFS(int node) {
	visit[node] = true;
	for (const auto& g : graph[node]) 
		if (!visit[g]) {
			cnt++;
			DFS(g);
		}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int from, to;
		cin >> from >> to;
		graph[to].push_back(from);
	}

	int max = 0;

	for (int i = 1; i <= n; i++) {
		fill(begin(visit), end(visit), false);
		cnt = 0;
		DFS(i);
		if (max == cnt)
			result.push_back(i);
		else if (max < cnt) {
			max = cnt;
			result.clear();
			result.push_back(i);
		}
	}

	sort(result.begin(), result.end());

	for (const auto& r :result)
		cout << r << " ";

	return 0;
}