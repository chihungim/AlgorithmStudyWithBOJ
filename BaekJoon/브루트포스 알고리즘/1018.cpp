#include <iostream>
#include <string>

using namespace std;

string board[51];

string w_board[8] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" };
string b_board[8] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };

int w_first(int x, int y)
{
	int r = 0;
	for(int i = 0; i<8; i++)
		for(int j = 0; j<8; j++)
			if (board[x + i][y + j] != w_board[i][j])
				r++;
	
	return r;
}

int b_first(int x, int y)
{
	int r = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (board[x + i][y + j] != b_board[i][j])
				r++;
		
	
	return r;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m, min = 10000;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> board[i];

	int w = 0, b = 0;

	for(int i = 0; i<=n - 8; i++ ){
		for (int j = 0; j <= m - 8; j++) {

			w = w_first(i, j);
			b = b_first(i, j);

			if (w < b)
				min = (w < min) ? w : min;
			else
				min = (b < min) ? b : min;
		}
	}

	cout << min << "\n";
}
