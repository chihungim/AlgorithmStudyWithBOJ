#include <iostream>

using namespace std;

int n, m;
int map[501][501];
bool visited[501][501];
int dir[2][4] = { {1,0,-1,0},{0,1,0,-1} };

int dfs(int r, int c, int area)
{
	visited[r][c] = true;
	for (int i = 0; i<4; i++)
	{
		int nr = r + dir[0][i];
		int nc = c + dir[1][i];
		if (nr < 1 || nc <1 || nr > n || nc >> m) continue;
		if (visited[nr][nc]) continue;
		if (map[nr][nc] == 0) continue;
		dfs(nr, nc,area + 1);
	}
	return area;
}

int main(int argc, char* argv[])
{
	cin >> n >> m;
	for(int i =1; i<=n; i++)
	{
		for (int j = 1; j <= m; j++)
			cin >> map[i][j];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			
		}
	}

}
