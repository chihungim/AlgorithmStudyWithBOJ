#include <iostream>
#include <string>
#include <regex>

using namespace std;

int Hexakosioihexekontahexaphobia(int n)
{
    int i = 666;
	
    regex re(".*666.*");

	while (true)
    {
        auto digit = to_string(i);
    	if(regex_match(digit, re))
    	{
            n--;
            if (n == 0)
                return i;
    	}
        i++;
			
    }
}


int main(int argc, char* argv[])
{
    int n = 0;
	std::cin >> n;
	std::cout << Hexakosioihexekontahexaphobia(n);
}
