#include <iostream>
#include <queue>
#include <algorithm>
#include <array>

//todo: 미해결 문제

using namespace std;

int n, m;

array<array<int, 8>,8> lab;
array<array<int, 8>, 8> after_lab;
array<array<bool, 8>, 8> visited; //to count empty areas

int dir[2][4] = { {0,1,0,-1},{1,0,-1,0} };

int bfs(int r, int c) 
{
	int cnt = 0;
	//two..
	queue<pair<int, int>> q;
	q.push(make_pair(r, c));

	while (!q.empty())
	{
		auto& CurCord = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int NextR = CurCord.first + dir[0][i];
			int NextC = CurCord.second + dir[1][i];
			if (NextR < 0 || NextC < 0 || NextR > n-1 || NextC > m-1) continue;
			if (after_lab[NextR][NextC] == 2 || after_lab[NextR][NextC] == 1) continue;
			cnt++;
			after_lab[NextR][NextC] = 2;
			q.push({ NextR, NextC });
		}
	}
	return cnt;
}


void showLabState()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << after_lab[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main(int argc, char* argv[])
{
	cin >> n >> m;

	for(int i = 0; i<n; i++)
		for(int j = 0; j<m; j++)
			cin >> lab[i][j];



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			after_lab = lab;
			if (after_lab[i][j] == 1) continue;
			after_lab[i][j] = 1;
			bfs(i, j);
			showLabState();
		}
	}
				

	showLabState();

	return 0;
}

