#include <iostream>
#include <stack>

using std::stack;
using std::cout;
using std::cin;



int main()
{
	stack<int> stk1;
	int k = 0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int n = 0;
		cin >> n;
		if (n == 0)
			stk1.pop();
		else
			stk1.push(n);
	}

	int sum = 0;
	while (!stk1.empty())
	{
		sum += stk1.top();
		stk1.pop();
	}

	cout << sum;
}