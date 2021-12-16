#include <iostream>

struct point2d
{
	int x, y;
};

int main(int argc, char* argv[])
{
	point2d p1, p2, p3, p4;

	std::cin >> p1.x >> p1.y;
	std::cin >> p2.x >> p2.y;
	std::cin >> p3.x >> p3.y;

	p4.x = p1.x ^ p2.x ^ p3.x;
	p4.y = p1.y ^ p2.y ^ p3.y;

	std::cout << p4.x << " " << p4.y;
	
}
