#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int L = 0, N = 0, low = 0, high = 0;
	
	cin >> L;
	vector<int> v(L);
	for (auto& val : v)
		cin >> val;

	cin >> N;

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		if (v[i] > N)
		{
			if (i == 0)
				low = 1;
			else
				low = v[i - 1] + 1;
			high = v[i] - 1;
			break;
		}
		else if (v[i] == N) {
			low = high = 0;
			break;
		}
	}

	if (high == 0 && low == 0)
		cout << 0;
	else
		cout << (high - N) + ((N - low) * (high - N + 1));
}