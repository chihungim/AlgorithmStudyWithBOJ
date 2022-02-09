#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n;
	int dp[1001] = {0,1,0,1,};

	cin >> n;

	for (int i = 4; i <= n; ++i) 
		if (min(dp[i - 1], dp[i - 3]) == 1) 
			dp[i] = 0;
		else 
			dp[i] = 1;
		

	if (dp[n] == 1) 
		cout << "SK" << endl;
	else 
		cout << "CY" << endl;
	
	return 0;
}