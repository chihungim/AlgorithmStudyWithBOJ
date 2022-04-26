#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int map[101][101];
bool visited[101][101];


int main() {

	int n,m,k;
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) {
		int r, c; cin >> r >> c;
		map[r][c] = 1;
	}

	int  cnt = 1;

	int dir[2][4] = { {0,1,-1,0}, {1,0,0,-1} };

	function<void(int,int)> dfs = [&](int r, int c) { 
		visited[r][c] = true;
		for (int i = 0; i < 4; i++) {
			int nextr = r + dir[0][i];
			int nextc = c + dir[1][i];
			if (nextr <= 0 || nextc <= 0 || nextr > n || nextc > m) continue;
			if (visited[nextr][nextc]) continue;
			if (map[nextr][nextc] != 1) continue;
			cnt++;
			dfs(nextr, nextc);
		}
	};

	int ans = 0;

	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= m; j++) 
			if (!visited[i][j] && map[i][j] == 1) {
				cnt = 1;
				dfs(i, j);
				ans = max(cnt, ans);
			}

	cout << ans << "\n";

	return 0;
}