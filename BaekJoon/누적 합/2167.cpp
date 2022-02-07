#include <iostream>
#include <numeric>
#include <array>
using namespace std;

array<array<int, 301>, 301> arr;
int n, m;

int getSumRange(int x1, int y1, int x2, int y2)
{
	int sum = 0;
	for(int j = x1; j<x2; j++)
		for(int i = y1; i<y2; i++)
			sum += arr[j][i];

	return sum;
}

int main(int argc, char* argv[])
{
	
	cin >> n >> m;

	for(int i = 0; i<n; i++){
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}

	int k;
	cin >> k;
	while(k--)
	{
		int i, j, x, y, sum = 0;
		cin >> i >> j >> x >> y; //from i j to x y

		cout << getSumRange(i-1,j-1,x,y) << '\n';
	}

	return 0;
}
