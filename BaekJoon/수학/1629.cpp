#include <iostream>
#define ull unsigned long long

using namespace std;

ull pow(ull a, ull b, ull c)
{
	if (b == 0) return 1;
	ull tmp = pow(a, b / 2, c);
	ull ans = (tmp * tmp) % c;
	if(b%2 == 1)
	{
		ans *= a;
		ans %= c;
	}

	return ans;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	ull a, b, c;
	cin >> a >> b >> c;
	cout << pow(a, b, c);

	return 0;
}
