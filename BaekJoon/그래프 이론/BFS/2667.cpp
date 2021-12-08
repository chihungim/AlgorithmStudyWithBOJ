#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define M_SIZE  26

using namespace std;

int n;

int map[M_SIZE][M_SIZE] = {{0,},};

int dirX[] = { 1, 0, -1, 0 };
int dirY[] = { 0, 1, 0, -1 };

int label = 0;

int labels[M_SIZE][M_SIZE] = {{0,},};
vector<pair<int, int>> to_do_visit_these_coordinates;
vector<int> ads;
//row col

void setLabels();
void clear();
void dfs(int r, int c);


int main() {
	
	cin >> n;

	
	for(int i =0; i<n; i++)
	{ 
		string rows;
		cin >> rows;
		for(int j = 0; j<rows.length(); j++)
		{
			 map[i][j] = rows[j] - '0';
			if(rows[j] - '0' == 1)
			{
				to_do_visit_these_coordinates.emplace_back(i, j);
			}
		}
	}
	
	
	setLabels();

	sort(ads.begin(), ads.end());

	cout << ads.size() << "\n";

	for (auto& a : ads)
		cout << a << "\n";
	
	return 0;
}

void dfs(int r, int c)
{
	label++;
	labels[r][c] = label;

	for(int i = 0; i<4; i++)
	{
		int x = c + dirX[i];
		int y = r + dirY[i];
		if((y < 0 || y > n) || (x < 0 || x > n))
			continue;
		if(!labels[y][x] && map[y][x] == 1)
			dfs(y, x);
	}
}



void setLabels()
{
	for(const auto todo: to_do_visit_these_coordinates)
	{
		if(!labels[todo.first][todo.second])
		{
			label = 0;
			dfs(todo.first, todo.second);
			ads.push_back(label);
		}
	}
}