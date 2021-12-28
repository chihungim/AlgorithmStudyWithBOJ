#include <iostream>

struct pos
{
	int x, y, z;
};

int main(int argc, char* argv[])
{
	pos a, b, c;
	std::cin >> a.x >> a.y >>a.z;
	std::cin >> c.x >> c.y >> c.z;
	b.x = c.x - a.z;
	b.y = c.y / a.y;
	b.z = c.z - a.x;
	std::cout << b.x << " " << b.y << " " << b.z;
}
