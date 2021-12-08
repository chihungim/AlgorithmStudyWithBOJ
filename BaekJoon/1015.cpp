#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int n;
	cin >> n;
	vector<int> v1(n);
	for (auto& v : v1)
		cin >> v;
	vector<int> v2 = v1;
	sort(v1.begin(), v1.end());

	for(auto v : v2)
	{
		int n = std::find(v1.begin(), v1.end(), v) - v1.begin();
		v1[n] = -1;
		cout << n << " ";
	}
}
