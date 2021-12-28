#include <iostream>
#define ull unsigned long long

int main(int argc, char* argv[])
{
	std::string str;
	std::cin >> str;
	ull tmp = 0;
	for(int i = 0; i<str.length(); i++)
		tmp = (tmp * 10 + (str[i] - '0')) % 20000303;

	std::cout << tmp;
}
