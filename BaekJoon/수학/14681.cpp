#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0;
	cin >> x >> y;
	if(x > 0 && y > 0)
	{
		cout << 1;
	}
	else if(x < 0 && y < 0)
	{
		cout << 3;
	}
	else if(x > 0 && y < 0)
	{
		cout << 4;
	}
	else
	{
		cout << 2;
	}
}