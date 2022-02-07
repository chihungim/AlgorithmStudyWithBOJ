#include <iostream>

using namespace std;

int map[3][3];
bool visited[3][3];

string result = "Hing";

void dfs(int r, int c){
	visited[r][c] = true;
	if(map[r][c] == -1)
		result = "HaruHaru";
	
	if(r + map[r][c] > 0 && r + map[r][c] < 3)
		if(!visited[r+map[r][c]][c])
			dfs(r + map[r][c], c);

	if (c + map[r][c] > 0 && c + map[r][c] < 3)
		if (!visited[r][c + map[r][c]])
			dfs(r, c + map[r][c]);
}

int main()
{
	int n;
	cin >> n;
	for(int i= 0; i<n; i++)
		for (int j = 0; j < n; j++) 
			cin >> map[i][j];
	dfs(0, 0);
	cout << result;
	return 0;
}