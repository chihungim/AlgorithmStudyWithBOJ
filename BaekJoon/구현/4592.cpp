#include <iostream>

using namespace std;

int n;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true)
	{
		cin >> n;
		if (!n)
		{
			return 0;
		}

		int a, lst = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a;

			if (lst != a)
			{
				cout << a << ' ';
				lst = a;
			}
		}

		cout << "$\n";
	}

	return 0;
}