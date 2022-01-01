#include <iostream>
#include <bitset>
#define ull unsigned long long

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int total = 0, sum = 0;
	ull a,  b;

	cin >> a >> b;
	
	for(ull i = a; i<=b; i++)
	{
		bitset<64> bit(i);
		total += bit.count();
	}

	cout << total;
}
