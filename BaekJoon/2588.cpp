#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	
	const int n3 = a * (b % 10);
	const int n4 = a * (b / 10 % 10);
	const int n5 = a * (b / 100);

	const int n6 = n3 + (n4 * 10) + (n5 * 100);
	cout << n3 << "\n" << n4 << "\n" << n5 << "\n" << n6;
} 
