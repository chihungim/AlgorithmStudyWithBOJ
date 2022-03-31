#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct node
{
	node* from;
	int value;
};

bool visited[1000001];
int dist[1000001];

int main(int argc, char* argv[])
{
	int x; cin >> x;
	queue<node*> q;
	node* dest = nullptr;

	q.push(new node{ nullptr, x });
	visited[x] = true;
	vector<int> answer;

	while(!q.empty())
	{
		const auto& from = q.front();
		int _x = from->value;
		q.pop();

		if(_x == 1)
		{
			dest = from;
			break;
		}

		if (_x < 1 || _x > 1000000) continue;

		if (!visited[_x - 1]) //순서만 바꿨는데 아무래도 _x - 1이 오는 녀석들이 항상 늦는듯
		{
			visited[_x - 1] = true;
			dist[_x - 1] = dist[_x] + 1;
			q.push(new node{ from, _x - 1 });
		}

		if(_x%3 == 0 && !visited[_x/3])
		{
			visited[_x / 3] = true;
			dist[_x / 3] = dist[_x] + 1;
			q.push(new node{ from, _x / 3 });
		}

		if (_x % 2 == 0 && !visited[_x / 2])
		{
			visited[_x / 2] = true;
			dist[_x / 2] = dist[_x] + 1;
			q.push(new node{ from, _x / 2});
		}
	}

	

	while(dest != nullptr)
	{
		answer.push_back(dest->value);
		dest = dest->from;
	}

	reverse(answer.begin(), answer.end());

	cout << dist[1] << "\n";

	for (auto& ans : answer)
		cout << ans << " ";
	return 0;
}
