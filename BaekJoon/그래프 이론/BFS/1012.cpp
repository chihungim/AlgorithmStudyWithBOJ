#include <iostream>
#include <queue>
#include <vector>

#define MAX 51

using namespace std;

int m, n, k; // m 가로길이, n 세로길이, k 배추 개수

vector<pair<int , int>> togo(MAX);

int dirX[] = { -1, 1, 0, 0 };
int dirY[] = { 0, 0, 1, -1 };

int map[MAX][MAX] = {{0,},};
bool visited[MAX][MAX] = {{false,},};
bool chkEmpty();
void bfs(int r, int c); 
void dfs(int r, int c);
void clearMap();
int cntArea();
void display();

int main(int argc, char* argv[])
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		cin >> m >> n >> k;
		clearMap();
		for(int i = 0; i<k; i++)
		{
			int x = 0, y = 0;
			cin >> x >> y;
			map[y][x] = 1;
			togo.emplace_back(y, x);
		}
		//display();
		cout << cntArea() << "\n";
	}
}

void clearMap()
{
	togo.clear();
	togo.shrink_to_fit();
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			map[i][j] = visited[i][j] = false;
}

void display()
{
	cout <<  "\n-----------------\n";
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
}

int cntArea()
{
	int cnt = 0;
	for(auto to : togo)
	{
		if (!visited[to.first][to.second])
		{
			cnt++;
			visited[to.first][to.second] = true;
			bfs(to.first, to.second);
		}
	}

	return cnt;
}


//void dfs(int r, int c)
//{
//	visited[r][c] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int dy = r + dirY[i];
//		int dx = c + dirX[i];
//		if (dy < 0 || dy >= n || dx < 0 || dx >= m) continue;
//		if (map[dy][dx] && !visited[dy][dx])  dfs(dy, dx);
//	}
//}

void bfs(int r, int c)
{
	queue <pair<int, int >> que;
	que.emplace(r, c);
	
	while(!que.empty())
	{
		r = que.front().first;
		c = que.front().second;
		visited[r][c] = true;
		que.pop();
		for(int i = 0; i<4; i++)
		{
			int dy = r + dirY[i];
			int dx = c + dirX[i];
			if (dy < 0 || dy >= n || dx < 0 || dx >= m) continue;
			if (map[dy][dx] && !visited[dy][dx]) { que.emplace(dy, dx); visited[dy][dx] = true; }
		}
	}
}



