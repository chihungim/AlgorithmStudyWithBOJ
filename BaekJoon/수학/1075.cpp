#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	int n  =0, f = 0, i = 0;
	std::cin >> n >> f;


	n = (n / 100) * 100;

	for(i = 0; i<100; i++)
	{
		int tmp = n;
		if ((tmp += i) % f == 0)
			break;
	}
	
	std::cout << std::setfill('0') << std::setw(2) << i;
}
