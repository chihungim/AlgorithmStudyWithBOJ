#include <iostream>

using namespace std;

int v[5];

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	for (auto& i : v) 
		cin >> i;

	int num = 1;
	while (true) {
		int cnt = 0; 
		for (int i : v)
			if (num >= i && num % i == 0) cnt++;
		if (cnt >= 3) {
			cout << num << '\n';
			break;
		}
		num++;
	}

	return 0;
}