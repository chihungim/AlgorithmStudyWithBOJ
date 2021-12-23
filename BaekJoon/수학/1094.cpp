#include <iostream>

using namespace std;

unsigned int cnt_bits(unsigned int n)
{
	unsigned int cnt = 0;
	while (n) {
		cnt += n & 1;
		n >>= 1;
	}
	return cnt;
}

int main(int argc, char* argv[])
{
	int x = 0;
	cin >> x;
	cout << cnt_bits(x) << "\n";
}
