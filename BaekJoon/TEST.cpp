#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main(int argc, char* argv[])
{
	vector<tuple<int, int, int>> v;
	v.emplace_back(1, 2, 3);

	cout << (find(v.begin(), v.end(), make_tuple(1, 2, 3)) != v.end());
}

