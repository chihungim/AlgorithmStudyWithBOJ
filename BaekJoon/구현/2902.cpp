#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string tmp;

    while (getline(ss, tmp, delimiter)) result.push_back(tmp);

    return result;
}

int main(int argc, char* argv[])
{
	string name;
	cin >> name;
    auto result = split(name, '-');

	for(auto& r : result)
	{
		cout << r[0];
	}
}
