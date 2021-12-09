#include <iostream>
#include <string>
#include <set>
using namespace std;

struct Compare {
	bool operator() (const string& a, const string& b) const {
		if (a.size() == b.size())
			return a < b;
		else
			return a.size() < b.size();
	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	set<string, Compare> s;
	string tmp;

	for(int i = 0; i<n; i++)
	{
		cin >> tmp;
		s.insert(tmp);
	}

	for(const auto& sets : s)
	{
		cout << sets << "\n";
	}
}
