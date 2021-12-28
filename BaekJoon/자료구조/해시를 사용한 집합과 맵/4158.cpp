#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	while (true)
	{
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		vector<int> n_cd(n);
		vector<int> m_cd(m);
		vector<int> nm_cd(n + m);

		for (auto& cd : n_cd)
			cin >> cd;
		for (auto& cd : m_cd)
			cin >> cd;


		const vector<int>::iterator itr = set_intersection(n_cd.begin(), n_cd.end(), m_cd.begin(), m_cd.end(), nm_cd.begin());
		nm_cd.resize(itr - nm_cd.begin());
		cout << nm_cd.size() << "\n";
	}

	return 0;
}
