#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int dp[41];

int fibonacci(int n) {
	if (n <= 0) { dp[0] = 0; return 0; }
	else if (n == 1) { dp[1] = 1; return 1; }
	if (dp[n] != 0)
		return dp[n];
	else
		return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}



int main(int argc, char* argv[])
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		if (n == 0)
		{
			cout << 1 << " " << 0 << "\n";
		}
		else if (n == 1)
		{
			cout << 0 << " " << 1 << "\n";
		}
		else
		{
			fibonacci(n);
			cout << dp[n - 1] << " " << dp[n] << "\n";
		}
	}
}
