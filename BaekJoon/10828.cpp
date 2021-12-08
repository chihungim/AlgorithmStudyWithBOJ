#include <stack>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	stack<int> s;
	int n;
	cin >> n;

	while(n--)
	{
		string cmd;
		cin >> cmd;
		if(cmd == "push")
		{
			int x;
			cin >> x;
			s.push(x);
		}
		else if(cmd == "pop")
		{
			if (!s.empty())
			{
				cout << s.top() << "\n";
				s.pop();
			}
			else
				cout << -1 << "\n";
		}
		else if(cmd == "size")
		{
			cout << s.size() << '\n';
		}
		else if(cmd == "empty")
		{
			cout << s.empty() << "\n";
		}
		else if(cmd == "top")
		{
			if(!s.empty())
				cout << s.top() << "\n";
			else
				cout << -1 << "\n";
		}
	}
	
}
