#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	int a;
	cin >> a;
	vector<int> divisors(a);

	for (auto& div : divisors)
		cin >> div;
	
	cout << (*min_element(divisors.begin(), divisors.end())) * (*max_element(divisors.begin(), divisors.end()));

	return 0;
}
