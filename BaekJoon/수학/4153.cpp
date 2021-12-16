#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	while (true)
	{
		int a = 0, b = 0, c = 0;
		cin >> a >> b >> c;
		if (!a && !b && !c)
			break;
		
		if (pow(a, 2) == pow(b, 2) + pow(c, 2))
			cout << "right\n";
		else if (pow(b, 2) == pow(a, 2) + pow(c, 2))
			cout << "right\n";
		else if (pow(c, 2) == pow(b, 2) + pow(a, 2))
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}
