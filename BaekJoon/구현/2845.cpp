#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int l, p;
	cin >> l >> p;
	vector<int> v(5);
	for (auto& val : v)
	{
		cin >> val;
		val = val - (l*p);
	}

	for (auto val : v)
		cout << val << " ";
}
