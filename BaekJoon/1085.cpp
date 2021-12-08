#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[])
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	if (w - x > h - y) {
		if (h - y > x)
			cout << ((x > y) ? y : x);
		else if (h - y > y)
			cout << ((y > x) ? x : y);
		else
			cout << (h - y);
	}
	else
	{
		if (w - x > x) 
			cout << (x > y ? y : x);
		else if (w - x > y) 
			cout << ((y > x) ? x : y);
		else 
			cout << (w - x);
	}

}
