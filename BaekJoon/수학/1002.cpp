#include <iostream>
#include <cmath>

using namespace std;

struct circle
{
	int x, y, r;
};

int main(int argc, char* argv[])
{
	int t = 0;	
	cin >> t;
	while (t--)
	{
		circle 조규현, 백승환;
		cin >> 조규현.x >> 조규현.y >> 조규현.r >> 백승환.x >> 백승환.y >> 백승환.r;
		long long dx = 조규현.x - 백승환.x, dy = 조규현.y - 백승환.y;

		long long add = 조규현.r + 백승환.r;
		add = add * add;
		long long sub = abs(조규현.r - 백승환.r);
		sub = sub * sub;
		int d = dx * dx + dy * dy;

		if (d < add && d > sub)
			cout << 2;
		else if (d == add || (d == sub && d != 0))
			cout << 1;
		else if (d < sub || d > add)
			cout << 0;
		else if(d == 0)
		{
			if (백승환.r == 조규현.r)
				cout << -1;
			else
				cout << 0;
		}

		cout << '\n';
	}

	return 0;
}
