#include <array>
#include <cstring>
#include <iostream>
#include <queue>

#define MAX 1001

using namespace std;

int dirX[] = { 0,1,0,-1 };
int dirY[] = { 1,0,-1,0 };

array<array<int, MAX>, MAX> farm;
int dist[MAX][MAX] = {0,};

void display();

int m, n;
int bfs(int r, int c);
int day = 0;
vector<pair<int, int>> togo;

int main(int argc, char* argv[])
{
	cin >> m >> n;
	memset(dist, -1, sizeof dist);
	
	for(int i = 0; i<n; i++)
		for(int j = 0; j<m; j++)
		{
			cin >> farm[i][j];
			if (farm[i][j] == 1)
				togo.emplace_back(i, j);
		}


		for(auto go: togo)
			cout << bfs(go.first, go.second) << "\n";
		
}

int bfs(int r, int c)
{
	dist[r][c] = 0;
	queue<pair<int, int>> que;
	que.emplace(r, c);


	while(!que.empty())
	{
		r = que.front().first;
		c = que.front().second;
	
		que.pop();

		display();
		
		for(int i = 0; i<4; i++)
		{
			int dy = r + dirY[i], dx = c + dirX[i];
			if (dy < 0 || dy >= n || dx < 0 || dx >= m) continue;
			if (farm[dy][dx] == 1 || farm[dy][dx] == -1) continue;
			if (dist[dy][dx] != -1) continue;
			farm[dy][dx] = 1;
			dist[dy][dx] = dist[r][c] + 1;
			que.emplace(dy, dx);
		}
	}

	return day;
}

void display()
{
	cout << "\n";
	cout << "--------------\n";
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << farm[i][j] << " ";
		}
		cout << "\n";
	}
}


