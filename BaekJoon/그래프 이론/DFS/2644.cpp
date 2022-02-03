#include <iostream>
#include <vector>

using namespace std;

int n, m, from, to, depth = -1;
vector<int> adj[101];
bool visit[101];
void dfs(int _from, int depth);

int main(int argc, char* argv[])
{
	cin >> n;
	cin >> from >> to;
	cin >> m;
	
	while(m--)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	dfs(from, 0);

	cout << depth << "\n";

	return 0;
}

void dfs(int _from, int _depth)
{
	visit[_from] = true;
	
	if (_from == to){depth = _depth;return;}
	
	for(auto _to : adj[_from])
	{
		if (!visit[_to])
			dfs(_to, _depth+1);
	}

	return;
}


