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
	//�Է½���
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
	//�Է� ��


	//��� ������ �� ����� c �� r �� ���� ��ġ�ؾ��� ->  (m�� ���� �ٽ� �Է¹޴´ٰ� �ص� ���� ���� ����)

	vector<vector<int>> result(n, vector<int>(k));

	mmult(a, b, result);

	for(auto& r : result)
	{
		for (auto& c : r)
			cout << c << " ";
		cout << "\n";
	}
}
