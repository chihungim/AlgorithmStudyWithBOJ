#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> password_map;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	while(n--)
	{
		string domain, pw;
		cin >> domain >> pw;
		password_map[domain] = pw;
	}

	while(m--)
	{
		string domain;
		cin >> domain;
		cout << password_map[domain] << "\n";
	}
	
}

