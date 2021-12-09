#include <queue>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	auto comp = [](int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;
		return abs(a) > abs(b);
	};
	priority_queue<int, vector<int>, decltype(comp)> pq(comp);
	int n = 0;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		if (x == 0)
		{
			if (pq.empty())
				cout << 0 << "\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
		{
			pq.push(x);
		}
	}

	return 0;
}

