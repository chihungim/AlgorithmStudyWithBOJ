#include <iostream>

int main(int argc, char* argv[])
{
	int n1, n2, n3;
	std::cin >> n1 >> n2 >> n3;
	std::cout << (((n1+1)*(n2+1))/(n3+1))-1;
	return 0;
}
