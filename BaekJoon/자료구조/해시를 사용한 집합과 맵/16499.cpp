#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	set<string> s;
	int n;
	cin >> n;
	while(n--)
	{
		string str;
		cin >> str;
		sort(str.begin(), str.end());
		s.insert(str);
	}

	cout << s.size() << "\n";
	return 0;
}
