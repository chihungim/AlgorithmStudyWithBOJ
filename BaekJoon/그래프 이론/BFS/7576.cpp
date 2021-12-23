#include <vector>
#include <iostream>
#include <queue>
#include <array>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int m, n;
array<array<int, 1001>, 1001> farm = {0,};
array<array<int, 1001>, 1001> day;
void bfs();	
void showFarm();

int main(int argc, char* argv[])
{
	cin >> m >> n;

	for(int i = 0; i<n; i++)
		day[i].fill(1);
	//1로 초기화


	for(int i = 0; i<n; i++)
		for(int j = 0; j<m; j++)
			cin >> farm[i][j];

	bfs();
	
	int result = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (farm[i][j] == 0) {
				cout << "-1\n";
				return 0;
			}
			if (result < day[i][j]) {
				result = day[i][j];
			}
		}
	}
	cout << result -1;

	return 0;
}

void bfs()
{
	queue<pair<int, int>> q; //towa sama maji tensi -> tomato
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (farm[i][j] == 1)
				q.emplace(i, j);

	int dirX[] = { 1,0,-1,0 };
	int dirY[] = { 0,1,0,-1 };
	
	while(!q.empty())
	{
		const int r = q.front().first;
		const int c = q.front().second;
		q.pop();

		for(int i = 0; i<4; i++)
		{
			int dy = r + dirY[i];
			int dx = c + dirX[i];
			if (dy < 0 || dy >= n || dx < 0 || dx >= m) continue;
			if (farm[dy][dx] == -1 || farm[dy][dx] == 1) continue;
			farm[dy][dx] = 1;
			day[dy][dx] = day[r][c] + 1;
			q.emplace(dy, dx);
		}
		//showFarm();
	}
}

void showFarm()
{
	cout << "-----------------------\n";
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			cout << farm[i][j] << " ";
		}
		cout << "\n";
	}
}
