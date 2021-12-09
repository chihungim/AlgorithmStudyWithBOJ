#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	vector < pair<int, int>> v(n);

	for (auto& val : v)
		cin >> val.first >> val.second;

	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int>b)
		{
			if (a.second == b.second)
				return a.first < b.first;
			return a.second < b.second;
		});


	for (auto& val : v)
	{
		cout << val.first << " " << val.second << "\n";
	}
}
