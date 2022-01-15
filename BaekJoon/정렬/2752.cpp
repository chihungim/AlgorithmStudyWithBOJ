#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int _max = max(n1, max(n2, n3));
	int _min = min(n1, min(n2, n3));
	int mid = (_min < n1 && _max > n1) ? n1 : (_min < n2 && _max > n2) ? n2 : n3;
	cout << _min << " " << mid << " " << _max;
	return 0;
}
