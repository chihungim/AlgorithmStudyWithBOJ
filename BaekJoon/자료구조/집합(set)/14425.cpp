#include <set>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	set<string> s;
	int n, m, cnt = 0;
	cin >> n >> m;

	for(int i = 0; i<n; i++)
	{
		string str;
		cin >> str;
		s.insert(str);
	}

	for(int i = 0; i<m; i++)
	{
		string str;
		cin >> str;
		if(s.find(str) != s.end())
		{
			cnt++;
		}
	}

	cout << cnt << "\n";
	
}
