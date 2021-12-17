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
		circle ������, ���ȯ;
		cin >> ������.x >> ������.y >> ������.r >> ���ȯ.x >> ���ȯ.y >> ���ȯ.r;
		long long dx = ������.x - ���ȯ.x, dy = ������.y - ���ȯ.y;

		long long add = ������.r + ���ȯ.r;
		add = add * add;
		long long sub = abs(������.r - ���ȯ.r);
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
			if (���ȯ.r == ������.r)
				cout << -1;
			else
				cout << 0;
		}

		cout << '\n';
	}

	return 0;
}
