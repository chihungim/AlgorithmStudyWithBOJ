#include <iostream>

using namespace std;


int main()
{
	int n = 0;
	cin >> n;
	for(int i = 0; i<9; i++)
	{
		cout << n << " * " << i + 1 << " = " << (i + 1) * n << "\n";
	}
}
