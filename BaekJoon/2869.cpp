#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, v, d = 0;
	cin >> a >> b >> v;
	
	if ((v - a) % (a - b) == 0)
		d = (v - a) / (a - b);
	else
		d = (v - a) / (a - b) + 1;
	cout << d+1;
	
}