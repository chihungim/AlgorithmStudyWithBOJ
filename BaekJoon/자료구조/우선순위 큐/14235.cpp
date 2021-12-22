#include <queue>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	
	priority_queue<int,vector<int>> pq;
	int n = 0;
	cin >> n;

	while(n--)
	{
		int cmd;
		cin >> cmd;
		if(cmd == 0)
		{
			if (pq.empty())
				cout << -1 << "\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
		{
			for(int i = 0; i<cmd; i++)
			{
				int v = 0;
				cin >> v;
				pq.push(v);
			}
		}
		
	}
	
	return 0;
}
