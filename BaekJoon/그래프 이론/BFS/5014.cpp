#include <iostream>
#include <queue>

using namespace std;

int dist[1000001];
bool visited[1000001];
int main(int argc, char* argv[])
{
	int f,s, g, u, d;
	cin >> f >> s >> g >> u >> d;

	queue<int> q;
	//坦製
	//tree税 depth 亜 焼観 置舘 井稽 奄系 亜掻帖亜 乞砧 1戚心製 せせせせせせせ

	q.push(s);
	dist[s] = 0;
	visited[s] = true;

	while (!q.empty())
	{
		int from = q.front();

		q.pop();

		if (from == g)
		{
			cout << dist[from] << "\n";
			return 0;
		}

		if (from + u <= f && !visited[from + u])
		{
			q.push(from + u);
			dist[from + u] = dist[from] + 1;
			visited[from + u] = true;
		}

		if (from - d >= 1 && !visited[from - d])
		{
			q.push( from - d);
			dist[from - d ] = dist[from] + 1;
			visited[from - d] = true;
		}
	}

	cout << "use the stairs";

	return 0;
}


