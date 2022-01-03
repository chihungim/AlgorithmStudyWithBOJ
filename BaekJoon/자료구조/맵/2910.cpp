#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ULL unsigned long long

using namespace std;

int main(int argc, char* argv[]){
	short n = 0;

	cin >> n;
	
	vector<pair<ULL,short>> c(n); //v , idx
	static map<ULL, vector<ULL>> m;

	for(int i = 0; i<n; i++)
	{
		cin >> c[i].first;
		c[i].second = i;
		if(m.find(c[i].first) == m.end())
		{
			vector<ULL> vec;
			vec.push_back(1);
			m.insert({ c[i].first,vec });
		}else
		{
			m.at(c[i].first).push_back(1);
		}
	}

	sort(c.begin(), c.end(), [](pair<ULL, short> a, pair<ULL, short> b)
	{
			int cnt1 = m.at(a.first).size(), cnt2 = m.at(b.first).size();
			if(cnt1 == cnt2)
				return a.second < b.second;

			return cnt1 > cnt2;
	});

	for (auto& v : c)
		cout << v.first << " ";
	
	
}
