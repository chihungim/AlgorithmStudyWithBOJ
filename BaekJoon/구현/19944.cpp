#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int m, n;
	cin >> n >> m;

	if (m == 1 || m == 2)
		cout << "NEWBIE!";
	else if (m <= n)
		cout << "OLDBIE!";
	else
		cout << "TLE!";

	return 0;
}


