#include <iostream>
#include <stack>

using namespace std;

//todo: 이거 해야함

int main(int argc, char* argv[])
{
	int n = 0, cnt = 0;
	cin >> n;
	stack<char> stk;
	while (n--)
	{
		string report;
		cin >> report;


		for (auto r : report)
		{
			if (!stk.empty())
			{
				if (r == stk.top())
				{
					stk.pop();
				}
				else
					stk.push(r);
			}
			else
				stk.push(r);
		}

		if (stk.empty())
			cnt++;

		cout << cnt << "\n";
	}
}
