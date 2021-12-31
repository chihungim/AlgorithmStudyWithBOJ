#include <iostream>

using namespace std;

long long cache[1000001] = { 0,1,2, };

// cache[i] =  cache[i - 2] + cache[i - 1] 피보나치
// 1 - > 1
// 2 - > 2
// 3 - > 3
// 4 - > 5
// 5 - > 8

int main()
{
	int n;
	cin >> n;	
	for (int i = 3; i <= n; i++)
		cache[i] = (cache[i - 2] + cache[i - 1]) % 15746;
	cout << cache[n];
}
