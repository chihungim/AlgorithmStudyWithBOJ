#include <iostream>

int main(int argc, char* argv[])
{
	int n, t, c, p;
	std::cin >> n >> t >> c >> p;
	int a = n / t;
	if (n % t == 0) a --;
	std::cout << a*c*p;
}
