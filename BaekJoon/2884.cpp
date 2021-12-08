#include <iostream>

using namespace std;

int main()
{
	int h = 0, m = 0;
	cin >> h >> m;
	auto s = (h * 3600) + (m * 60);
	s -= 2700;
	if (s < 0) s += 86400;
	h = s / 3600;
	m = (s % 3600) / 60;
	cout << h << " " << m;
}
