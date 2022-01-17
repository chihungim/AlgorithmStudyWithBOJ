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
using namespace std;

int main(int argc, char* argv[])
{
	int k, a, d;
	string input;
	cin >> input;
    auto v = split(input, '/');
    k = stoi(v[0]); d = stoi(v[1]); a = stoi(v[2]);

    if (k + a < d || d == 0)
        cout << "hasu\n";
    else
        cout << "gosu\n";
    return 0;
}
