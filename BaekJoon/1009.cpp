#include <iostream>
#include <cmath>
#include <cstdint>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	for(int i = 0; i<t; i++)
	{
		int a, b;
		cin >> a >> b;
		int task = 1;
		for(int j = 0; j<b; j++)
		{
			task *= a;
			task %= 10;
		}
		if (task == 0) cout << 10 << "\n";
		else cout << task << "\n";
	}
}