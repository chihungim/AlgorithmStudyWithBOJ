#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> v(5);
	for (auto& val : v)
		cin >> val;

	cout << accumulate(v.begin(), v.end(),0);
}
