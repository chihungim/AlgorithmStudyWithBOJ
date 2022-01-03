#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;	
	map<string,string, greater<>> _log;
	
	while(n--)
	{
		string name, status;
		cin >> name >> status;
		if (status == "enter")
			_log[name] = status;
		else
			_log.erase(name);
	}

	for(const auto &l : _log)
	{
		cout << l.first << "\n";
	}
	
}
