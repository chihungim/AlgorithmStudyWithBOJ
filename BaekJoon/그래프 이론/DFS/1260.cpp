#include <iostream>
#include <queue>
#define MAX_V 1001

using namespace std;

int adjMAT[MAX_V][MAX_V] = { {0,}, };
bool visit[MAX_V] = { false, };
bool connected(int v, int u);
void reset();
void bfs(int v);
void dfs(int v);

int n, m, s;

int main(int argc, char* argv[])
{
	cin >> n >> m >> s;
	for(int i =0; i<m; i++)
	{
		int v, u;
		cin >> v >> u;
		adjMAT[v][u] = adjMAT[u][v] = 1; //간선 수치는 그냥 1로 함 히히~
	}
	reset();
	dfs(s);
	cout << "\n";
	bfs(s);
	
}

bool connected(int v, int u)
{
	return (adjMAT[v][u] != 0) && (adjMAT[u][v] != 0);
}


void reset()
{
	for(int i = 1; i<=n; i++)
		visit[i] = false;
}

void dfs(int v)
{
	visit[v] = true;
	cout << v << " ";
	for(int i = 1; i<=n; i++)
	{
		if (connected(v, i) && !visit[i])
			dfs(i);
	}
}

void bfs(int v)
{
	reset();
	visit[v] = true;
	queue<int> queue;
	queue.push(v);
	cout << v << " ";
	while (!queue.empty()) {
		int v = queue.front();
		queue.pop();
		for(int u = 1; u<=n; u++) 
		{
			if(connected(v,u) && !visit[u])
			{
				queue.push(u);
				cout << u << " ";
				visit[u] = true;
			}
		}
	} 
}
