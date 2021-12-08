#include <iostream>

using namespace  std;

int main()
{
	int t = 0;
	int a = 0, b = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a; cin >> b;
		cout << "Case #" << i + 1 << ": " << a  << " + " << b << " = " << a+b << "\n";
	}
}