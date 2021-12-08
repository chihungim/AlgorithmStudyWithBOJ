#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace myFunc
{
	vector<int> v;

	int min(int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (((3 * i) + (5 * j)) == n)
					v.push_back(i + j);
			}
		}
		if (v.empty())
			return -1;
		else
			return *min_element(v.begin(), v.end());
	}
}


int main()
{
	int n = 0;
	cin >> n;
	cout << myFunc::min(n);
}
