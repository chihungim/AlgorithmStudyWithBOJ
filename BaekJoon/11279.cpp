#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char* argv[])
{

	cin.tie(nullptr);
	iostream::sync_with_stdio(false);
	int n = 0;
	priority_queue<int> pr_que;

	cin >> n;
	for(int i = 0; i<n; i++)
	{
		int x = 0;
		cin >> x;
		if (x == 0)
		{
			if (!pr_que.empty())
			{
				cout << pr_que.top() << "\n";
				pr_que.pop();
			}
			else
				cout << 0 << "\n";
		}
		else
			pr_que.push(x);
	}
	
}
