#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
int main(int argc, char* argv[])
{
	int n, m;
	cin >> n >> m;
	int g = gcd(n, m);
	cout <<  g<< "\n";
	cout << (n * m) / g;
}
