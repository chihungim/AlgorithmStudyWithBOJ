#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

#define MAX_V 101

using namespace std;

int dirX[] = { 0,1,0,-1 };
int dirY[] = { 1,0,-1,0 };

int n;
int map[MAX_V][MAX_V] = { {0,}, };
int labels[MAX_V][MAX_V] = { {0,} };
int label = 0;

vector<int> possibilities;
vector<int> togo;

bool isAllEqual();
void resetVisit();
void dfs(int r, int arrv, int lv);
void setLabels(int lv);

int main(void) {
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
			if(find(togo.begin(), togo.end(), map[i][j]) == togo.end())
				togo.push_back(map[i][j]);
		}

	if(isAllEqual())
	{
		cout << 1;
		return 0;
	}
	
	//row col 만 기억해서 넣는다.
	for(auto& lv: togo)
		setLabels(lv); 
		
	sort(possibilities.begin(), possibilities.end(), greater<int>());

	cout << possibilities[0];

}

bool isAllEqual()
{
	int _the_val = map[0][0];
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if (map[i][j] != _the_val)
				return false;
		}
	}
	return true;
}

void setLabels(int lv)
{
	resetVisit();
	//cout <<"level->" << lv << "\n\n";
	//cout << "----------------------\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (labels[i][j] == 0 && map[i][j] > lv)
			{
				label = label + 1;
				dfs(i, j, lv);
			}
			//cout << labels[i][j] << " ";
		}
		//cout << "\n";
	}
	//cout << "\n";
	//cout << "\n";

	possibilities.push_back(label);
}

void resetVisit()
{
	label = 0;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			labels[i][j] = 0;

}

//void bfs(int r, int c, int lv)
//{
//	queue < pair<int, int>> que;
//	que.emplace(r, c);
//	labels[r][c] = label;
//
//	while(!que.empty())
//	{
//		int rr = que.front().first;
//		int cc = que.front().second;
//		
//		
//	}
//}

void dfs(int r, int arrv, int lv) //n보다 클 경우..
{
	//cout <<  "\nvisited->" << r << "," << arrv << "level->" << lv << "\n";
	labels[r][arrv] = label;
  	for (int i = 0; i < 4; i++)
	{
		const int dy = r + dirY[i];
		const int dx = arrv + dirX[i];
		if (dx < 0 || dx > n || dy < 0 || dy > n) continue;
		if (!labels[dy][dx] && map[dy][dx] > lv)  dfs(dy, dx, lv); 
	}
}

