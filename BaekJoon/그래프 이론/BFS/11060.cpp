#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[1001] = { 0, };

vector <int> map(1001);

int bfs(int startPos);
int n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		map[i + 1] = temp;
	}

	cout << bfs(1) << '\n';

}

int bfs(int startPos){
	queue<pair<int,int>> q; //len..dir

	q.emplace(0, startPos);
	visited[startPos] = true;

	while (!q.empty()) {
		auto len = q.front().first;
		auto cirPos = q.front().second;
		q.pop();

		if (cirPos == n)
			return len;

		for (auto nextPos = cirPos + 1; nextPos <= cirPos + map[cirPos]; nextPos++)
			if (!visited[nextPos])
			{
				visited[nextPos] = true;
				q.push({ len + 1,nextPos });
			}
	}

	return -1;
}