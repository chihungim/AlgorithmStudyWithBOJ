#include <iostream>
#include <vector>

using namespace std;

bool possible(vector<int>& pos, int n, int h);

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> pos(m);
	
	for (auto& p : pos) {
		cin >> p;
	}

	int start = 1, end = n;
	int mid = (start + end) / 2, ans = 0;

	while (start <= end) {
		if (possible(pos, n, mid)) {
			ans = mid;
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		mid = (start + end) / 2;
	}

	cout << ans << '\n';

	return 0;
}

bool possible(vector<int>& pos, int n, int h)
{
	int start = 0;
	for (int i = 0; i < pos.size(); i++) {
		if (pos[i] - h <= start)
			start = pos[i] + h;
		else
			break;
	}

	return n - start <= 0;
}
