#include <iostream>
#include <vector>

#define INF 10000000

using namespace std;

int v , e , k ;
int adjMap[20001][20001] = { 0, };
int path[2][20001] = {0,};  //거리, 방문여부

void dijkstra(int k);

int main()
{
	cin >> v >> e;
	cin >> k;

	for(int i = 1; i<=v; i++)
		for(int j = i + 1; j<=e; j++)
			adjMap[i][j] = adjMap[j][i] = INF;

	for(int i = 0; i<e; i++)
	{
		int v = 0, u = 0;
		cin >> v >> u;
		cin >> adjMap[v][u]; //간선 수치
		adjMap[u][v] = adjMap[v][u];
	}

	for(int i = 1; i<=e; i++)
	{
		if (path[0][i] == INF)
			cout << "INF ";
		else
			cout << path[0][i] <<" ";
	}
}

void dijkstra(int k)
{
	for(int i = 1; i<=v; i++)
		path[0][i] = adjMap[k][i];

	path[1][k] = true;

	for(int i = 1; i<=v; i++)
	{
		int min = 2147483647,idx = 0;
		for(int j = 1; j<=v; j++)
			if(path[0][j] < min && !path[1][j])
			{
				min = path[0][j];
				idx = j;
			}

		int from = idx;
		
		path[1][from] = true;
		for (int to = 1; i <= v; to++)
			if (!path[1][to] && path[0][from] + adjMap[from][to] < path[0][to])
				path[0][to] = path[0][from] + adjMap[from][to];
	}
}
