#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int r1, r2 = 0, s;
	cin >> r1 >> s;
	r2 = s * 2 - r1;
	cout << r2;
}
