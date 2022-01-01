#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	
	while(t--)
	{
		set<int> a;
		int n,m;
		vector<int> solution;
		cin >> n;
		for(int i = 0; i<n; i++)
		{
			int v;
			cin >> v;
			a.insert(v);
		}

		cin >> m;
		
		for(int i = 0; i<m; i++)
		{
			int v;
			cin >> v;
			solution.push_back(a.find(v) != a.end());
		}

		for (auto& s : solution)
			cout << s << " ";
	}
}
