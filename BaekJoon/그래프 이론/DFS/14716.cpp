#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int banner[251][251];
bool visited[251][251];

int dir[2][8] = { {0,1,0,-1,1,1,-1,-1},{1,0,-1,0,1,-1,-1,1} };

int m, n;

void dfs(int r, int c) {
	visited[r][c] = true;
	for (int i = 0; i < 8; i++) {
		int nextr = r + dir[0][i];
		int nextc = c + dir[1][i];
		if (nextr < 1 || nextc < 1 || nextr > m || nextc > n) continue;
		if (visited[nextr][nextc]) continue;
		if (banner[nextr][nextc] != 1) continue;
		dfs(nextr, nextc);
	}
}

//void showStatus() {
//	cout << "task:\n";
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			cout << visited[i][j] << ' ';
//		}
//		cout << "\n";
//	}
//}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	//start...
	cin >> m >> n;

	for (int i = 1; i <= m; i++) 
		for (int j = 1; j <= n; j++) 
			cin >> banner[i][j];

	int cnt = 0;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			if (banner[i][j] == 1 && !visited[i][j]) {
 				dfs(i, j); //표기용임 ㅋㅋ
				cnt++;
				//showStatus();
			}

	cout << cnt << '\n';
	return 0;
}