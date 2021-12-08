#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.sync_with_stdio(false);

	long long t = 0, a= 0, b = 0;
	cin >> t;

	for(long long i = 0; i<t; i++)
	{
		cin >> a; cin >> b;
		cout << a + b << "\n";
	}
}