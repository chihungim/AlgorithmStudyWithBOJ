#include <iostream>
#include <queue>
#include <array>

using namespace std;

//1차원 짜리 ㄷㄷ

int steps[100001] = { {0,} };

int n, k;

int bfs();

bool isAvaliable(int n) {
	if (n < 0 || n > 100000 || steps[n])
		return false;
	return true;
}

int main(int argc, char* argv[])
{
	cin >> n >> k;
	cout << bfs() << "\n";
}

int bfs()
{
	queue<pair<int, int>> q;
	q.push({ n,0 });

	while (!q.empty())
	{
		int x = q.front().first;
		int f = q.front().second;
		q.pop();
		if (x == k)
			return f;

		if (isAvaliable(x - 1))
		{
			steps[x - 1] = true;
			q.push({ x - 1, f+1 });
		}
		if (isAvaliable(x + 1))
		{
			steps[x + 1] = true;
			q.push({ x + 1, f+1 });
		}

		if (isAvaliable(x * 2))
		{
			steps[x * 2] = true;
			q.push({ x * 2, f+1 });
		}
	}
}





