#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//55 - 50 + 40
	int ans = 0;
	string equation;
	char mode = '+';
	cin >> equation;

	for (int i = 0; i < equation.length(); i++) {
		string str = "";

		while (i < equation.length() && equation[i] != '+' && equation[i] != '-')
			str += equation[i++]; //부호 전까지 숫자 ...

		if (mode == '+')
			ans += stoi(str);
		else
			ans -= stoi(str);

		if (mode == '+' && equation[i] == '-')
			mode = '-';
	}

	cout << ans << "\n";
	
	return 0;
}