#include <iostream>
#define MAX_V 101

using namespace std;

int adj[MAX_V][MAX_V] = { {0,}, };
bool visited[MAX_V] = { false, };
bool connected(int v, int u);
void reset();
void dfs(int s);

int n, m, cnt;

int main(int argc, char* argv[])
{
	cin >> n;
	cin >> m;
	for(int i = 0; i<m; i++)
	{
		int v = 0, u = 0;
		cin >> v >> u;
		adj[v][u] = adj[u][v] = 1;
	}

	dfs(1);
	cout << cnt;	
}

void reset()
{
	for(int i = 0; i<n; i++)
		visited[i] = false;
}

bool connected(int v, int u)
{
	return (adj[v][u] == 1) && (adj[u][v] == 1);
}


void dfs(int v)
{
	visited[v] = true;
	for(int u = 1; u<=n; u++)
	{
		if (connected(v, u) && !visited[u])
		{
			cnt++;
			dfs(u);
		}
	}
}

