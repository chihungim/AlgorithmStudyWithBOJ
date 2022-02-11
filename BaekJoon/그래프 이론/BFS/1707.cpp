#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> adj[200001];
int color[200001] = { 0, };
bool isBipartite = false;


int main() {
	int k = 0;

	cin >> k;
	while (k--) {

		int v, e;
		cin >> v >> e;

		isBipartite = true;
		fill(begin(color), end(color), 0);
		for(int i =0; i<=v; i++)
			adj[i].clear();

		for (int i = 0; i < e; i++)
		{
			int from, to; cin >> from >> to;
			adj[from].push_back(to);
			adj[to].push_back(from);
		}	

		for (int i = 1; i <= v; i++) {
			if (!isBipartite)
				break;
			if (color[i] == 0)
			{
				queue<int> q;
				q.push(i);
				color[i] = 1;

				while (!q.empty() && isBipartite) {
					int from = q.front(); q.pop();
					for (auto to : adj[from]) {
						if(color[to] == 0)
						{
							q.push(to);
							color[to] = color[from] * -1;
						}else if(color[from] + color[to] != 0)
							isBipartite = false;
					}
				}
			}
		}
		cout << (isBipartite ? "YES" : "NO") << "\n";
	}

	return 0;
}