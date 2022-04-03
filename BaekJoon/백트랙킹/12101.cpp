#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>

//todo: 이거 제출해야함

using namespace std;

int main(int argc, char* argv[])
{
	
	vector<string> ans;
	
	int n, k; cin >> n >> k;
	int incrs[] = { 1,2,3 };

	queue<pair<string, int>> q;
	q.push({ "",0 });

	while (!q.empty()) {
		string s = q.front().first;
		int sum = q.front().second;
		q.pop();
		for (int i = 0; i < 3; i++) {
			sum += incrs[i];
			if (sum > n)
				continue;
			else if (sum == n)
				ans.push_back({ s + to_string(incrs[i]) });
			else
				q.push({ s + to_string(incrs[i]) + "+" , sum });
			sum -= incrs[i];
		}
	}

	if (k > ans.size()) {
		cout << -1 << "\n";
		return 0;
	}

	sort(ans.begin(), ans.end());

	cout << ans[k-1] << "\n";
	return 0;
}
