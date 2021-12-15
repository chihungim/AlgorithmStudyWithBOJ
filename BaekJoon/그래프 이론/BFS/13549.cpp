#include <iostream>
#include <queue>
#include <array>

using namespace std;

//1차원 짜리 ㄷㄷ

int steps[200001];

int n, k;

int bfs();

bool isAvaliable(int n) {
	if (n < 0 || n > 100000 || steps[n])
		return false;
	return true;
}

int main(int argc, char* argv[])
{
	fill(begin(steps), end(steps), 10000000);
	cin >> n >> k;
	cout << bfs() << "\n";
}

int bfs()
{
	deque<int> dq; //x, depth (cost)
	dq.push_back(n);
	steps[n] = 0;
	
	while(!dq.empty())
	{
		const int x = dq.front();
		dq.pop_front();

		
		if (x == k) return steps[x];

		int w = x * 2; //워프임 ㅋㅋ
		
		if(w <= 200000 && steps[w] > steps[x])
		{
			steps[w] = steps[x];
			dq.push_front(w);
		}

		int minus = x - 1, plus = x + 1;

		if(minus >= 0 && steps[minus] > steps[x] + 1)
		{
			dq.push_back(minus);
			steps[minus] = steps[x] + 1;
		}

		if (plus <= 200000 && steps[plus] > steps[x] + 1)
		{
			dq.push_back(plus);
			steps[plus] = steps[x] + 1;
		}
	}
}
