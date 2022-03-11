#include <iostream>
#include <vector>
#include <functional>

using namespace std;

vector<int> graph[500001];
bool visited[500001];

int main(int argc, char* argv[])
{
	int n; cin >> n;
	int cnt = 0;

	for(int i = 0; i<n-1; i++)
	{
		int a, b; cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	function<void(int, int)> dfs = [&](int cur, int depth) {
		visited[cur] = true;
		if(cur != 1 && graph[cur].size() == 1)
		{
			if (depth % 2 == 1) cnt++;
			return;
		}

		for (const auto& next : graph[cur]) {
			if (!visited[next])
				dfs(next, depth + 1);
			
		}

	};

	dfs(1, 0);

	if (cnt % 2 == 1) cout << "Yes";
	else cout << "No";

	return 0;
}
