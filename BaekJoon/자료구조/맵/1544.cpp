#include <string>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

bool check()
{
	
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	map<string, int> str_map;
	int n;
	cin >> n;
	while(n--)
	{
		string str;
		cin >> str;
		sort(str.begin(), str.end());
		str_map[str] = 0;
	}

	cout << str_map.size() << "\n";

	return 0;
}
