#include <iostream>
#include <queue>

using std::cin;
using std::cout;
using std::queue;
using std::string;



int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);

	queue<int> q;
	
	int n;
	cin >> n;
	while(n--)
	{
		string cmd;
		cin >> cmd;
		if(cmd == "push")
		{
			int x = 0;
			cin >> x;
			q.push(x);
		}
		else if(cmd == "pop")
		{
			if (q.empty())
				cout << -1 << "\n";
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if(cmd == "size")
		{
			cout << q.size() << "\n";
		}
		else if(cmd == "empty")
		{
			cout << q.empty() << "\n";
		}
		else if(cmd == "front")
		{
			if (!q.empty())
				cout << q.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else if(cmd == "back")
		{
			if (!q.empty())
				cout << q.back() << "\n";
			else
				cout << -1 << "\n";
		}
	}
}
