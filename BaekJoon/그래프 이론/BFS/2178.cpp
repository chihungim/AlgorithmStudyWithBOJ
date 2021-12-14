#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define MAX 101

using namespace std;

int m, n;
int map[MAX][MAX] = { 0, };
int dist[MAX][MAX] = {-1,};
int dirX[] = { 0,1,0,-1 };
int dirY[] = { 1,0,-1,0 };
int possibilities(int r, int c);

int main(int argc, char* argv[])
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	memset(dist, -1, sizeof dist);
	cin >> n >> m;


	for(int i =0; i<n; i++)
	{
		string row;
		cin >> row;
		for(int j = 0; j<m; j++)
		{
			map[i][j] = row[j] - '0';
		}
	}

	cout << possibilities(0, 0);
}

int possibilities(int r, int c)
{
	queue<pair<int, int>> que;
	que.emplace(r, c);
	dist[r][c] = 1; 

	while(!que.empty())
	{
		r = que.front().first;
		c = que.front().second;
		que.pop();


		
		if (r == n-1 && c == m-1)
			return dist[r][c];
		
		for(int i = 0; i<4; i++)
		{
			int dy = r + dirY[i];
			int dx = c + dirX[i];

			if (dy < 0 || dy > n || dx < 0 || dx > m) continue;
			if (dist[dy][dx] != -1) continue;
			if (!map[dy][dx]) continue;
			que.emplace(dy, dx);
			dist[dy][dx] = dist[r][c] + 1;
		}
	}

	return -1;
}
