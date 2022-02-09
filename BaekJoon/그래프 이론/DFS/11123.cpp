#include <iostream>

using namespace std;

int dirX[] = {0,1,0,-1};
int dirY[] = {1,0,-1,0};
bool visited[101][101];
int h, w;
string map[101];

void dfs(int r, int c)
{
	visited[r][c] = true;
	for(int i =0; i<4; i++)
	{
		int nextY = r + dirY[i];
		int nextX = c + dirX[i];

		if (nextY < 0 || nextY > h-1) continue;
		if (nextX < 0 || nextX > w-1) continue;
		if (map[nextY][nextX] == '.') continue;
		if(visited[nextY][nextX]) continue;
		dfs(nextY, nextX);
	}
}

void clear()
{
	fill_n(visited[0], 101 * 101, false);
}


int main(int argc, char* argv[])
{
	int t;
	cin >> t;

	while(t--)
	{
		clear();
		int cnt = 0;
		cin >> h >> w;
		for (int i = 0; i < h; i++)
			cin >> map[i];

		for(int i = 0; i<h; i++)
			for(int j = 0; j<w; j++)
			{
				if(!visited[i][j] && map[i][j] == '#')
				{
					dfs(i, j);
					cnt++;
				}
			}

		cout << cnt << "\n";
	}
}
