#include <iostream>

using namespace std;

int main()
{
	int n = 0, sum = 0;
	cin >> n;
	for(int i = 1; i<=n; i++)
	{
		sum += i;
	}

	cout << sum;
}