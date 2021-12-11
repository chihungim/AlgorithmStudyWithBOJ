#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	string input;
	while(true)
	{
		cin >> input;
		if (input == "0")
			break;
		string r = input;
		reverse(r.begin(), r.end());
		cout << (r == input ? "yes" : "no") << "\n";
	}
	return 0;
}
