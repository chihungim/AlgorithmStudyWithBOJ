#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

auto main() -> int
{
	string str1;
	string str2;

	cin >> str1 >> str2;

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());
	
	const int result = stoi(str1) > stoi(str2) ? stoi(str1) : stoi(str2);
	cout << result;
}
