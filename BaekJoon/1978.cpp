#include <iostream>
bool isPrime(int num)
{
	if (num < 2) return false;
	for(int i = 2; i*i<=num; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}

int main(int argc, char* argv[])
{
	int n, cnt = 0;
	std::cin >> n;
	for(int i =0;i<n; i++)
	{
		int n = 0;
		std::cin >> n;
		if (isPrime(n)) cnt++;
	}
	std::cout << cnt;
}
