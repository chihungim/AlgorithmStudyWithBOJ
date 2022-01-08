#include <iostream>
#include <map>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	map<string, int> m = { {"Re", 0}, {"Pt", 0}, {"Cc", 0}, {"Ea", 0}, {"Tb", 0}, {"Cm", 0}, {"Ex", 0}};
	vector<string> v = { "Re", "Pt", "Cc", "Ea", "Tb", "Cm", "Ex" };

	while(true)
	{
		string cmd;
		cin >> cmd;
		if (cin.eof()) break;
		m[cmd]++;
	}

	const int sum = accumulate(begin(m), end(m), 0, [](const int prev, const std::pair<const  string, int>& p)
	                              {return prev + p.second;});
	cout.precision(2);

	for(auto key : v)
		cout << fixed << key << " " << m[key] << " " << static_cast<float>(m[key]) / sum << "\n";

	cout << "Total " << sum << " 1.00\n";

	return 0;
}
