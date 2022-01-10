#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array<array<int, 3>, 1001> houses;

int main(int argc, char* argv[])
{
	int n;
	cin >> n;
	
	houses[0][0] = houses[0][1] = houses[0][2] = 0;
	
	for(int i = 1; i<=n; i++)
	{
		int r, g, b;
		cin >> r >> g >> b;
		houses[i][0] = min(houses[i - 1][1], houses[i - 1][2]) + r;
		houses[i][1] = min(houses[i - 1][0], houses[i - 1][2]) + g;
		houses[i][2] = min(houses[i - 1][0], houses[i - 1][1]) + b;
	}

	cout << *min_element(begin(houses[n]), end(houses[n])) << '\n';

	return 0;
}
