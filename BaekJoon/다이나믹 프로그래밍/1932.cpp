#include <iostream>
#include <algorithm>

using namespace std;


//�ϵ� ��ͷ�
/*
	        7
	      3   8
	    8   1   0
	  2   7   4   4
	4   5   2   6   5
 */

//��� �ϸ� 33�� ������ �ù�???
int ans = 0;

int triangle[501][501];
int n;

void f(int r, int c, int sum) //peek �� ó�� ������
{
	if (r < 1 || c < 1 || r > n || c > n + n -1) 
		return;

	if(r == n)
	{
		ans = max(ans, sum);
		return;
	}

	f(r + 1, c - 1, sum + triangle[r - 1][c - 1]);
	f(r + 1, c + 1,sum + triangle[r + 1][c + 1]);
}

int main(int argc, char* argv[])
{
	fill_n(&triangle[0][0], 501*501 , -1);
	cin >> n;
	int baseColumn = n+1;
	int end = n;
	for(int i = 0; i<=n; i++)
	{
		for(int j = baseColumn; j <=end; j+=2)
			cin >> triangle[i][j];
		end++;
		baseColumn--;
	}
	
	f(1, n,triangle[1][n]);

	cout << ans << '\n';
}
