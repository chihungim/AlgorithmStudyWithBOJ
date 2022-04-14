#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	
	int cnt = 0;

	if (str.size() <= 10) {
		cout << str << "\n";
		return 0;
	}


	for (int i = 0; i < str.size(); i++) {
		if (cnt == 10) {
			str.insert(i, "\n");
			cnt = -1;
		}
		cnt++;
	}

	cout << str;

}