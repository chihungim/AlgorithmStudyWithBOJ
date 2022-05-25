#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long ans;
long long arr[100002];
long long dp[100002];

int main(int argc, char* argv[])
{
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	ans = dp[0] = arr[0];

	for (int i = 1; i < n; i++) {
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
		ans = max(ans, dp[i]);
	}

	cout << ans << '\n';

	return 0;
}
