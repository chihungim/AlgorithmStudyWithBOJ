#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> ��(n);
	vector<string> ��(m);
	vector<string> �躸��(n + m);
	vector<string>::iterator itr;
	
	for (auto& �� : ��)
		cin >> ��;

	for (auto& �� : ��)
		cin >> ��;

	sort(��.begin(), ��.end());
	sort(��.begin(), ��.end());

	itr = set_intersection(��.begin(), ��.end(), ��.begin(), ��.end(), �躸��.begin());
	�躸��.resize(itr - �躸��.begin());

	cout << �躸��.size() << "\n";
	for(auto& �躸 : �躸��)
	{
		cout << �躸 << "\n";
	}

	return 0;
}