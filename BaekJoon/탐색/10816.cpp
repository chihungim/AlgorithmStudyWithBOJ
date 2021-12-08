#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n = 0;
	cin >> n;

	vector<long long> v1(n);
	for (auto& v : v1)
		cin >> v;
	
	int m = 0;
	cin >> m;

	vector<long long> v2(m);
	for (auto& v : v2)
		cin >> v;

	sort(v1.begin(), v1.end());

	for(auto& v : v2)
	{
		cout << (upper_bound(v1.begin(), v1.end(),v)-lower_bound(v1.begin(), v1.end(),v)) << " ";
	}
}
