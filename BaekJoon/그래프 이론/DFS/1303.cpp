#include <iostream>
#include <vector>

using namespace std;

char map[101][101];
bool visited[101][101];


int dir[2][4] = { {0,1,0,-1},{1,0,-1,0} };
int n, m;
int wtotal, btotal;
int cnt;

void dfs(int r, int c, char criteria)
{
	visited[r][c] = true;
	for(int i = 0; i<4; i++)
	{
		int nr = r +  dir[0][i];
		int nc = c + dir[1][i];
		if (nr <= 0 || nc <= 0 || nr >= m + 1 || nc >= n  + 1) continue;
		if (visited[nr][nc]) continue;
		if (map[nr][nc] != criteria) continue;
		cnt++;
		dfs(nr, nc, criteria);
	}
}


//void showMapState()
//{
//	cout << "----------------------------- \n";
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			cout << visited[i][j];
//		cout << '\n';
//	}
//	cout << "----------------------------- \n";
//}

int main(int argc, char* argv[])
{

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> m;
	string temp;
	for(int i = 1; i<=m; i++)
	{
		cin >> temp;
		for(int j = 0; j<n; j++)
			map[i][j + 1] = temp[j];
	}


	for(int i = 1; i<=m; i++)
	{
		for(int j = 1; j<=n; j++)
		{

			if(!visited[i][j])
			{
				cnt = 1;
				if(map[i][j] == 'W')
				{
					dfs(i, j, 'W');
					wtotal += cnt * cnt;
				}else
				{
					dfs(i, j, 'B');
					btotal += cnt * cnt;
				}
				//cout << cnt << '\n';
				//cout << wtotal << ' ' << btotal << '\n';
				//showMapState();
			}

		}
	}

	cout << wtotal << " " << btotal << '\n';
	return 0;
}
