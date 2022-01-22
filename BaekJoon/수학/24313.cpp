#include <iostream>

using namespace std;

int a1, a0, c, n;

int main()
{
	cin >> a1 >> a0 >> c >> n;
	auto f = [](int _n) {return a1 * _n + a0; };
	auto g = [](int _n) {return _n; };
	for(int i = n; i<=100; i++)
		if (!(f(i) <= c * g(i)))
		{
			cout << 0;
			return 0;
		}
	
	cout << 1;
	return 0;
}