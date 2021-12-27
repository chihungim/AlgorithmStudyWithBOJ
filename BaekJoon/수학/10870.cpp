#include <iostream>
#include <cmath>
#include <cfloat>
#define ull unsigned long long

ull fibo(ull n)
{
	double sqrt5 = sqrt(5);
	return fabsl(1 / sqrt5 * (pow((1 + sqrt5) / 2, n) - pow((1 - sqrt5) / 2, n)));
}

int main(int argc, char* argv[])
{
	ull n;
	std::cin >> n;
	std::cout << fibo(n);
}
