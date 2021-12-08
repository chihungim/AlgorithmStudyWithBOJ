#include <iostream>

using namespace std;

int main()
{
	int n = 0, l = 0;
	cin >> n >> l; //sum = n, length = l

	for (int i = l; i <= 100; i++)
	{
		int tmp = n - i * (i + 1) / 2; 
		if (tmp % i == 0)
		{
			int j = tmp / i + 1;
			if (j >= 0)
			{
				for (int k = 0; k < i; k++)
				{
					cout << k + j << " ";
				}
				cout << "\n";

				return 0;
			}
		}
	}

	cout << -1;

	return 0;
}
