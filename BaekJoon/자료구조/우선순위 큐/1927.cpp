#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n = 0;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;

	while(n--)
	{
		int cmd;
		cin >> cmd;
		if(cmd == 0)
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
			pq.push(cmd);
		}
	}
	

}
