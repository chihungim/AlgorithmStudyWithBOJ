#include <iostream>

using namespace std;

long long cache[1001][1001] = { 0, };

long long dp(int n, int m)
{
	if (n == 0 || m == 0) return 0;
	if (n == 1 && m == 1) return 1;
	if (cache[n][m]) return cache[n][m];
	long long result = (dp(n, m - 1) + dp(n - 1, m) + dp(n - 1, m - 1)) % 1000000007;
	cache[n][m] = result;
	return result;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	cout << dp(n, m) % 1000000007;

}



