#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	
	for(int i=0; i<t; i++)
	{
		int r = 0, c = 0, n = 0, floor = 1, room = 1;
		cin >> r >> c >> n;
		floor = n % r;
		if (floor == 0) floor = r;
		room = ceil(static_cast<double>(n) / r);
		cout << floor * 100 + room << "\n";
	}
}