#include <iostream>
#include <string>
#include <algorithm>

using std::string;

int main()
{
	string n;
	std::cin >> n;
	std::sort(n.begin(), n.end());
	std::reverse(n.begin(), n.end());
	std::cout << n;
	
}