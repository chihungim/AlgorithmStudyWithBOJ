#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, m;
	cin >> n;
	
	vector<int> v1(n);
	for (auto& v : v1)
		cin >> v;
	
	cin >> m;

	vector<int> v2(m);
	for (auto& v : v2)
		cin >> v;

	stable_sort(v1.begin(), v1.end());

	for(const auto& v: v2)
		if (binary_search(v1.begin(), v1.end(), v))
			cout << "1 ";
		else
			cout << "0 ";

	return 0;
}
