#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);	
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	set<int> s;
	for (auto& v : a)
	{
		cin >> v;
		s.insert(v);
	}

	sort(a.begin(), a.end());

	while(m--)
	{
		int f;
		cin >> f;
		if (s.find(f) == s.end())
			cout << -1 << "\n";
		else
		{
			int pos = lower_bound(a.begin(), a.end(),f) - a.begin();
			cout << pos << "\n";
		}
		
	}
}