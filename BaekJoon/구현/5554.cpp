#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> v(4);
	for (auto& val : v)
		cin >> val;
	int sum = accumulate(v.begin(), v.end(), 0);
	cout << sum / 60 << "\n" << sum % 60;
}
