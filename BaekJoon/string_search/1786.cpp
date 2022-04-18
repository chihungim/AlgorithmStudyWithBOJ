#include <iostream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

//todo: solve this

using vi = vector<int>;

vi getPi(string str) {
	int m = str.size(), j = 0;
	vi pi(m, 0);
	for (int i = 1; i < m; i++) {
		while (j > 0 && str[i] != str[j])
			j = pi[j - 1];
		if (str[i] == str[j])
			str[i] = ++j;
	}

	return pi;
}

vi kmp(string s, string p) {
	vi ans;
	int n = s.size(), m = p.size(), j = 0;
	for (int i = 0; i < n; i++) {
		while (j > 0 && s[i] != p[j]) {
			j = p[j - 1];
		}  
	}
}

int main() {

}
