#include <iostream>
#include <queue>
#include <array>

using namespace std;

//1차원 짜리 ㄷㄷ

int steps[100001] = {0,};
int n, k;

void bfs();

bool isAvaliable(int n) {
	if (n < 0 || n > 100000 || steps[n])
		return false;
	return true;
}

int min_depth, t;

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cin >> n >> k;
	bfs();
	cout << min_depth << "\n" << t << "\n";
}

void bfs()
{
	queue<pair<int, int>> q;
	q.push({ n,0 });

	while (!q.empty())
	{
		int x = q.front().first;
		int f = q.front().second;
		q.pop();

		//if (!min_depth && f > min_depth)
			//break;

		steps[x] = true;

		if (f == min_depth && x == k)
			t++;
		
		if (!t && x == k)
		{

			min_depth = f;
			t++;
		}

		if (isAvaliable(x - 1))
		{
			q.push({ x - 1, f + 1 });
		}
		if (isAvaliable(x + 1))
		{
			q.push({ x + 1, f + 1 });
		}

		if (isAvaliable(x * 2))
		{
			q.push({ x * 2, f + 1 });
		}
	}
}

