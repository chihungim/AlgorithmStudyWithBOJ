#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main(int argc, char* argv[])
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	
	int n = 0,m = 0;

	cin >> n;
	
	vector<int> m1(n);
	for (auto& itr : m1)
		cin >> itr;

	cin >> m;

	vector<int> m2(m);
	for (auto& itr : m2)
		cin >> itr;

	std::sort(m1.begin(), m1.end());
	
	for(auto itr : m2)
		cout << (std::binary_search(m1.begin(), m1.end(), itr)) << "\n";
	
	
}
