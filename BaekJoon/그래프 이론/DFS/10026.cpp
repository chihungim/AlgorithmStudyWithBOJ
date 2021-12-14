#include <iostream>
#include <array>
#include <vector>

using namespace std;

int n;

char rgb_map[101][101] = { '\0',};

int label = 0;
int labels[101][101] = { 0, };

int label_w = 0;
int labels_w[101][101]= { 0, };

void dfs(int r, int c, char criteria);
void dfs_w(int r, int c, char criteria);

void labeling();
void labeling_w();

int dirX[] = { 1,0,-1,0 };
int dirY[] = { 0,1,0,-1 };

int main(void)
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	cin >> n;
	for(int i = 0; i<n; i++)
		for (int j = 0; j < n; j++)
			cin >> rgb_map[i][j];

	labeling();
	labeling_w();
	cout << label << " " << label_w << "\n";
	
}

void labeling()
{
	for(int i = 0; i<n; i++)
		for(int j = 0; j<n; j++)
			if(!labels[i][j])
			{
				label++;
				dfs(i, j, rgb_map[i][j]);
			}
}

void labeling_w()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (!labels_w[i][j])
			{
				label_w++;
				dfs_w(i, j, rgb_map[i][j]);
				/*out << "-------------\n";
				for (int i = 0; i < n; i++)
				{
					
					for (int j = 0; j < n; j++)
					{
						cout << labels_w[i][j] << " ";
					}
					cout << '\n';
				}*/
			}
}

void dfs(int r, int c, char criteria)
{
	labels[r][c] = label;
	for(int i = 0; i<4; i++)
	{
		int dx = dirX[i] + c;
		int dy = dirY[i] + r;
		if(dx < 0 || dx > n || dy <0 || dy >n )
			continue;
		if (labels[dy][dx]) continue;
		if (rgb_map[dy][dx] != criteria) continue;

		dfs(dy,dx, criteria);
	}
}

void dfs_w(int r, int c, char criteria)
{
	labels_w[r][c] = label_w;
	for (int i = 0; i < 4; i++)
	{
		int dx = dirX[i] + c;
		int dy = dirY[i] + r;
		if (dx < 0 || dx > n || dy <0 || dy >n)
			continue;
		if (labels_w[dy][dx]) continue;
		if(criteria == 'G' || criteria == 'R')
		{
			if (rgb_map[dy][dx] == 'B') continue;
			dfs_w(dy, dx, rgb_map[dy][dx]);
		}else
		{
			if (rgb_map[dy][dx] != criteria) continue;
			dfs_w(dy, dx, criteria);
		}
	}
}





