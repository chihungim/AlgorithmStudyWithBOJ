#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> graph[100001];
int visited[100001];

int main(int argc, char* argv[])
{
	int n, m, r,order = 1;
	cin >> n >> m >> r;

	for(int i = 0; i<m; i++)
	{
		int u, v; cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	queue<int> q;
	visited[r] = order++;
	q.push(r);

	for(int i = 1; i<=n; i++)
		sort(graph[i].begin(), graph[i].end());

	while(!q.empty())
	{
		int cur = q.front();  q.pop();
		for(const auto to : graph[cur])
		{
			if(!visited[to])
			{
				visited[to] = order++;
				q.push(to);
			}
		}
	}

	for(int i = 1; i<=n; i++)
		cout << visited[i] << "\n";

	return 0;
}
