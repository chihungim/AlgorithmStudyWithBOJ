#include <vector>
#include <iostream>
#include <queue>
#include <array>
#include <tuple>

using namespace std;

int h, m, n;
array<array<array<int, 101>, 101>, 101> farm = { 0, };
array<array<array<int, 101>, 101>, 101> day; // == distance
void bfs();
void showState();
int main(int argc, char* argv[])
{
	cin >> m >> n >> h;

	for (int i = 0; i < h; i++)
		for (int j = 0; j < n; j++)
			day[i][j].fill(1); //1로 초기화 O(n^2)


	for (int i = 0; i < h; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < m; k++)
				cin >> farm[i][j][k];

	bfs();

	int result = 0;

	for (int i = 0; i < h; i++){
		for (int j = 0; j < n; j++){
			for (int k = 0; k < m; k++) {
				if (farm[i][j][k] == 0) {
					cout << "-1\n";
					return 0;
				}
				if (result < day[i][j][k]) {
					result = day[i][j][k];
				}
			}
		}
	}
	cout << result - 1;

	return 0;
}

void bfs()
{
	queue < tuple <int, int, int>> q; //towa sama maji tensi -> tomato
	for (int i = 0; i < h; i++) 
		for (int j = 0; j < n; j++) 
			for (int k = 0; k < m; k++) 
			if (farm[i][j][k] == 1)
				q.emplace(i,j,k); //y x z

	int dirY[] = { 1,0,0,-1,0,0 };
	int dirX[] = { 0,1,0,0,-1,0};
	int dirZ[] = { 0,0,1,0,0,-1};

	while (!q.empty())
	{
		const int y = get<0>(q.front());
		const int x = get<1>(q.front());
		const int z = get<2>(q.front());
		q.pop();

		for (int i = 0; i < 6; i++)
		{

			const int dy = y + dirY[i]; //floor
			const int dx = x + dirX[i]; // x
			const int dz = z + dirZ[i]; // z
			//cout << dy << " " << dx << " " << dz << "\n";

			if (dy < 0 || dy >= h || dx < 0 || dx >= n || dz < 0 || dz >= m) continue;
			if (farm[dy][dx][dz] == -1 || farm[dy][dx][dz] == 1) continue;
			farm[dy][dx][dz] = 1;
			day[dy][dx][dz] = day[y][x][z] + 1;
			q.emplace(dy, dx, dz);
		}
		//showState();
	}
}

void showState()
{
	for (int i = 0; i < h; i++) {
		cout << "f:" << i << "\n";
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cout << farm[i][j][k] << "  ";
			}
			cout << "\n";
		}
	}
}


