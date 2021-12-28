#include <iostream>

int main(int argc, char* argv[])
{
	int l, t = 0;
	std::cin >> l;
	if (l % 5 != 0)
		t = (l / 5) + 1;
	else
		t = l / 5;
	std::cout << t;
}
