#include <iostream>

using namespace std;

int adj[101][101] = { 0, };
int n = 0;

//todo: ¿À´Ã Áý°¡¼­ ÇÒ²¨

void  Floyd_Warshall()
{
	int d[101][101] = {0,};

	for(int i= 0; i<n; i++)
		for(int j = 0; j<n;j++)
		{
			d[i][j] = adj[i][j];
			d[j][i] = d[i][j];
		}

	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (d[i][j] + d[k][j] < d[i][j])
					d[i][j] = d[i][k] + d[k][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << d[i][j] << " ";
		cout << '\n';
	}
}

int main(int argc, char* argv[])
{
	cin >> n;


	for(int i = 0; i<n; i++)
		for (int j = 0; j < n; j++)
		{
			
			cin >> adj[i][j];
			adj[j][i] = adj[i][j];
		}

	Floyd_Warshall();

}
