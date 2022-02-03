#include <iostream>
#include <set>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

std::vector<std::string> split(const std::string& str) {
	std::vector<std::string> result;
	std::istringstream iss(str);
	for (std::string s; iss >> s; )
		result.push_back(s);
	return result;
}

int main(){
	set<string> s;
    string str;
    getline(cin, str);
    for (auto& v : split(str)) {
		if (!s.insert(v).second) {
			cout << "no";
			return 0;
		}
	}

	cout << "yes";

	return 0;
}