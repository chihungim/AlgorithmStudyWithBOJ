#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 999999999;

int  n, m;
int cost[101][101] = {0,};

int main() {
	cin >> n >> m;
	
	for (int i = 1; i <= n; ++i)
		for (int j = i + 1; j <= n; ++j)
			cost[i][j] = cost[j][i] = INF;
	
	for (int i = 0; i < m; ++i) {
		int v, e, dist; //cost¶û °°Àº°ÅÀÓ
		cin >> v >> e >> dist;
		cost[v][e] = min(cost[v][e], dist);
	}
	
	for (int k = 1; k <= n; ++k)
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= n; ++j)
				cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j)
			cout <<  (cost[i][j] == INF ? 0 :  cost[i][j]) << ' ';
		cout << '\n';
	}
	return 0;
}