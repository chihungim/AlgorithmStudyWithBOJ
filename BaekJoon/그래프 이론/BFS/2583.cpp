#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

constexpr int MAX = 101;

using namespace std;

vector<int> area;

int m, n, k, cnt = 0;

int dirX[] = { 1,0,-1,0 };
int dirY[] = { 0,1,0,-1 };

int label;
int labels[MAX][MAX];

void show();
void setLabels();
void dfs(int r, int c);

int main(int argc, char* argv[])
{

	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	cin >> m >> n >> k;

	while(k--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int i = y1; i<y2; i++)
			for(int j = x1; j<x2; j++)
			{
				labels[i][j] = -1;
			}
	}
	setLabels();
	cout << area.size() << "\n";
	sort(area.begin(), area.end());
	
	for (auto& c : area)
		cout << c << " ";
	cout << "\n";
}

void dfs(int r, int c)
{
	labels[r][c] = label;
	cnt++;
	for(int i = 0; i<4; i++)
	{
		int dy = dirY[i] + r;
		int dx = dirX[i] + c;
		if (dy < 0 || dy >= m || dx < 0 || dx >= n ) continue;
		if (labels[dy][dx] == -1 || labels[dy][dx] != 0) continue;
		
		dfs(dy, dx);
	}
}

void setLabels()
{
	for(int i = 0; i<m; i++)
		for(int j = 0; j<n; j++)
			if (labels[i][j] == 0)
			{
				cnt = 0;
				label++;
				dfs(i, j);
				area.push_back(cnt);
				//show();
			}
}

void show()
{
	cout << "---------------\n";
	for(int i = 0; i<m; i++)
	{
		for (int j = 0; j <n; j++)
			cout << labels[i][j] << " ";
		cout << "\n";
	}
}
