#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	iostream::sync_with_stdio(false);
	deque<int> due;
	int n;
	cin >> n;
	for(int i =0; i<n; i++)
	{
		string cmd;
		int input = 0;
		cin >> cmd;
		if (cmd == "push_back")
		{
			cin >> input;
			due.push_back(input);
		}
		else if (cmd == "push_front")
		{
			cin >> input;
			due.push_front(input);
		}
		else if (cmd == "front")
			if (!due.empty())
				cout << due.front() << "\n";
			else
				cout << -1 << "\n";
		else if (cmd == "back")
			if (!due.empty())
				cout << due.back() << "\n";
			else
				cout << -1 << "\n";
		else if (cmd == "size")
			cout << due.size() << "\n";
		else if (cmd == "empty")
			cout << (due.empty() ? 1 : 0) << "\n";
		else if (cmd == "pop_front")
		{
			if (!due.empty())
			{
				cout << due.front() << "\n";
				due.pop_front();
			}
			else
				cout << -1 << "\n";
		}
		else if(cmd == "pop_back")
		{
			if (!due.empty())
			{
				cout << due.back() << "\n";
				due.pop_back();
			}
			else
				cout << -1 << "\n";
		}
	}
}
