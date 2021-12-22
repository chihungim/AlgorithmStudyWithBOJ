#include <set>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	set<int> s;
	int m;
	cin >> m;
	while(m--)
	{
		string cmd;
		int x = 0;
		cin >> cmd;
		if(cmd == "add")
		{
			cin >> x;
			s.insert(x);
		}else if(cmd == "remove")
		{
			cin >> x;
			s.erase(x);
		}else if(cmd == "check")
		{
			cin >> x;
			cout << (s.find(x) != s.end()) << "\n";
		}else if(cmd == "toggle")
		{
			cin >> x;
			if((s.find(x) != s.end()))
				s.erase(x);
			else
				s.insert(x);
		}else if(cmd == "all")
		{
			s = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
		}else if(cmd == "empty")
		{
			s.clear();
		}		
	}

	return 0;
}

