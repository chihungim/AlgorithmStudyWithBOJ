
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;

auto main() -> int
{

	string input;
	string str_buffer;
	vector<string> result;
	
	getline(cin, input);

	istringstream ss(input);
	
	while(getline(ss, str_buffer, ' '))
	{
		if(str_buffer.empty()) continue;
		result.push_back(str_buffer);
	}

	cout << result.size();
	
	return 0;
}
