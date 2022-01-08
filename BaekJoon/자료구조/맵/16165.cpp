#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	map<string, vector<string>> group_idols;
	map<string, string> idol_group;
	
	int n, m;
	cin >> n >> m;

	while(n--)
	{
		int cnt;
		string group_name;
		cin >> group_name;
		cin >> cnt;

		for(int i = 0; i<cnt; i++)
		{
			string name;
			cin >> name;
			group_idols[group_name].push_back(name);
			idol_group[name] = group_name;
		}
		
		sort(group_idols[group_name].begin(), group_idols[group_name].end());
	}

	while(m--)
	{
		int cmd;
		string order;
		cin >> order;
		cin >> cmd;

		if (cmd == 0)
			for (auto names : group_idols[order])
				cout << names << "\n";
		else
			cout << idol_group[order] << "\n";
	}

	return 0;
}
