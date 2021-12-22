#include <iostream>
#include <vector>
using namespace std;


void mmult(vector<vector<int>> a, vector <vector<int> > &b ,vector<vector<int>> &dest)
{
	int n = a.size();
	int m = b.size();
	int k = b[0].size();
	for(int i = 0; i<n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			dest[i][j] = 0;

			for (int k = 0; k < m; k++)
			{
				dest[i][j] = dest[i][j] + a[i][k] * b[k][j];
			}
		}
	}
}

int main(int argc, char* argv[])
{
	//입력시작
	int n, m, k;
	// row, col, row  col
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	
	for (auto& r : a)
		for (auto& c : r)
			cin >> c;

	cin >> m >> k;

	vector<vector<int>> b(m, vector<int>(k));
	
	for (auto& r : b)
		for (auto& c : r)
			cin >> c;
	//입력 끝


	//행렬 곱셈은 두 행렬의 c 과 r 의 값이 일치해야함 ->  (m의 값을 다시 입력받는다고 해도 같은 값일 것임)

	vector<vector<int>> result(n, vector<int>(k));

	mmult(a, b, result);

	for(auto& r : result)
	{
		for (auto& c : r)
			cout << c << " ";
		cout << "\n";
	}
}
