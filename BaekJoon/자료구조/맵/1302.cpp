#include <iostream>
#include <map>

using namespace std;

int main(int argc, char* argv[])
{
	map<string, int, less<>> m;

	int n;
	cin >> n;
	while(n--)
	{
		string title;
		cin >> title;
		auto itr = m.insert({ title, 1 });
		if (!itr.second)
			m[title]++;
	}

	multimap<int, string, greater<>> m_map;
	for (auto& it : m)
		m_map.insert({ it.second, it.first });

	cout << m_map.begin()->second;
	
	return 0;
}
