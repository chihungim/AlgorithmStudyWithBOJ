
#include <iostream>

using namespace std;

bool is_han_soo(int n)
{
	if (n < 100)
		return true;
	else
	{
		int a = n/100, b = n%100/10, c = n%10;
		
		if(a - b == b - c)
		{
			return true;
		}
	}

	return false;
}

auto main() -> int
{
	int n = 0, cnt = 0;
	cin >> n;

	for(int i = 1; i<=n; i++)
	{
		if (is_han_soo(i))
			cnt++;
	}

	cout << cnt;
	
	return 0;
}
