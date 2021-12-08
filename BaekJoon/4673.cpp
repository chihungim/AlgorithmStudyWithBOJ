#include <iostream>

using namespace std;

int getSum(int n)
{
	auto sum = 0;
	while(n!=0)
	{
		sum = sum + n % 10;
		n /= 10;
	}
	
	return sum;
}

bool isSelfNumber(const int n)
{
	for(int m = 1; m <=n; m++)
	{
		if (m + getSum(m) == n) // 만약 존재 한다면 false
			return false;
	}
	return true;
}

auto main() -> int
{
	for(int i = 1; i<10000; i++)
	{
		if (isSelfNumber(i))
			cout << i << "\n";
	}

	return 0;
}
