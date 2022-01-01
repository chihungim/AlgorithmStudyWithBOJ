#include <iostream>
#include <cmath>

using namespace std;

bool isPretty(int n)
{
	int h = 1;
	//min * max = n
	//1 2 4 8
	//v = lwh so l*w = n
}


int main(int argc, char* argv[])
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		cout << (isPretty(n) ? "TAK" : "NIE") << "\n";
	}
	
}
