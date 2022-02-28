#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

constexpr int INF = 9999999;

int cost[101][101];

int main() {
	int n, m;
	cin >> n >> m;

	fill(&cost[1][1], &cost[100][100], INF);

	for (int i = 1; i <= n; i++)
		cost[i][i] = 0;

	for (int i = 0; i < m; i++) {
		int from, to; cin >> from >> to;
		cost[from][to] = 1;
		cost[to][from] = 1;
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
			}
		}
	}

	int min = 2147483647;

	vector < pair<int, int>> ans;


	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j <= n; j++) {
			sum += cost[i][j];
		}
		if (sum < min) {
			min = sum;
			ans.emplace_back(min, i);
		}
	}

	sort(ans.begin(), ans.end());

	cout << ans[0].second << "\n";

	return 0;
}