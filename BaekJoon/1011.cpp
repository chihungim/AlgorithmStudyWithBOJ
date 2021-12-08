#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int t, l;
	long long x, y;

	cin >> t;

	while(t--)
	{
		cin >> x >> y;
		long long dis = y - x;
		long long v = static_cast<long long>(sqrt(dis));
		if (dis == v*v)
			cout << 2 * v - 1 << '\n';
		else if (v * v < dis && dis <= v * v + v)
			cout << 2 * v << '\n';
		else if (v * v + v < dis && dis < (v + 1) * (v + 1))
			cout << 2 * v + 1 << '\n';
	}
}
