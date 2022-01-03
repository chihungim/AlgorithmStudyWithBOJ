#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

bool isParam(string line)
{
	char* p;
	strtol(line.c_str(), &p, 10);
	return *p == 0;
}
int main(int argc, char* argv[])
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	map<string, int> poke_serials;
	map<int, string> poke_names;

	int n = 0, m = 0;
	cin >> n >> m;

	for(int i = 1; i<=n; i++)
	{
		string pokeName;
		cin >> pokeName;
		poke_serials.emplace(pokeName, i);
		poke_names.emplace(i, pokeName);
	}

	for(int i = 1; i<=m; i++)
	{
		string input;
		cin >> input;
		if(isParam(input))
			cout << poke_names.at(stoi(input)) << "\n";
		else
			cout << poke_serials.at(input) << "\n";
	
	}
}
