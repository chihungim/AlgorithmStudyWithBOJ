#include <string>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

map<string, int> str_map;

bool Exists(string str)
{
	string temp = str;
	temp.push_back(temp.front());
	temp.erase(0, 1);
	
	if (str_map.find(temp) != str_map.end())
		return false;

	while(temp != str)
	{
		temp.push_back(temp.front());
		temp.erase(0, 1);
		if (str_map.find(temp) != str_map.end())
			return false;
	}

	return true;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;
	while(n--)
	{
		string str;
		cin >> str;
		if(Exists(str))
			str_map.insert({ str,0 });
	}

	cout << str_map.size() << "\n";

	return 0;
}
