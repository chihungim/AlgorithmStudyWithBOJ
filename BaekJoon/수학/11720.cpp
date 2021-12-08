
#include <iostream>
#include <string>

using namespace std;

auto main() -> int
{
	int n, sum = 0;
	cin >> n;
	string str;
	
	cin >> str;
	for(int i = 0; i<str.size(); i++)
	{
		sum += (str[i] - 48);
	}
	cout << sum;

}
