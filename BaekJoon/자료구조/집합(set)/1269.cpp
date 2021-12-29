#include <iostream>
#include <vector>
#include <algorithm>

#define ll  long long

using namespace std;

int main(int argc, char* argv[])
{
	int n, m;
	cin >> n >> m;

	vector<ll> a(n), b(m);
	vector<ll> diff(n + m);

	for (auto& v : a)
		cin >> v;
	for (auto& v : b)
		cin >> v;

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	auto itr = set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), diff.begin());
	diff.resize(itr - diff.begin());
	cout << diff.size();
}
