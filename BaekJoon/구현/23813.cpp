#include <string>
#include <iostream>
#include <algorithm>
#define ULL unsigned long long

using namespace std;

int main(int argc, char* argv[])
{
	ULL sum = 0;
	ULL input;
	cin >> input;

	string str = to_string(input);
	int l = str.length();


	//987654321
	for(int i = 0; i<l; i++)
	{
		sum += stoll(str);
		str.insert(0, to_string(str.back()-'0'));
		str.pop_back();
	}

	cout << sum;
	
}
