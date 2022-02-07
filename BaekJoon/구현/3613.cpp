#include <iostream>
#include <string>

using namespace std;


string jtoc(string str) {
	while (str.find('_') != string::npos) {
		int pos = str.find('_');
		str.erase(pos, 1);
		str[pos] = toupper(str[pos]);
	}

	return str;
}

string ctoj(string str) {
	for (int i = 0; i < str.size(); i++) {
		if (str[i] < 'a') {
			str.insert(i, "_");
			str[i + 1] = tolower(str[i + 1]);
			i++;
		}
	}
	return str;
}

int main() {
	string str, result;
	cin >> str;
	
	bool flag = false;

	if (str[0] < 'a' || str[0] == '_' || str[str.size() - 1] == '_') flag = true;
	
	if (!flag) {
		for (int i = 0; i < str.size() - 1; i++) {
			if (str[i] == '_' && str[i + 1] == '_') {
				flag = true;
				break;
			}
		}
	}

	if (str.find('_') != string::npos) {
		for (int i = 0; i < str.size(); i++) {
			if ('A' <= str[i] && str[i] <= 'Z') {
				flag = true;
				break;
			}
		}
		result = jtoc(str);
	}
	else {
		result = ctoj(str);
	}

	if (flag) 
		cout << "Error!";
	else 
		cout << result;

	return 0;
}