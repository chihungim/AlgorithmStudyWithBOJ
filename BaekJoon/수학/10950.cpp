#include <iostream>

using namespace  std;

int main()
{
	int a = 0, b = 0, t = 0;
	cin >> t;

	for(int i = 0; i<t; i++)
	{
		cin >> a; cin >> b;
		cout << a + b << "\n";
	}
}
