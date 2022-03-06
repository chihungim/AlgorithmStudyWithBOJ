#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> g[100001];

int visited[100001] = {0,};
int n, m, r;
int idx = 1;
void dfs(int cur)
{
	visited[cur] = idx++;
	for (const auto to : g[cur])
	{
		if (visited[to] != 0)
			continue;
		dfs(to);
		
	}
}

int main(int argc, char* argv[])
{
	cin >> n >> m >> r;
	
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	for(auto& a : g)
		sort(a.begin(), a.end());

	dfs(r);

	for(int i = 1; i<=n; i++)
		cout << visited[i] << "\n";

	return 0;
}
