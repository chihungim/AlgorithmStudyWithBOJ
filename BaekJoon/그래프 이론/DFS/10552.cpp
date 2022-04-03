#include<iostream>

using namespace std;

int answer;
int tv[100001];
int check[100001];

void dfs(int hated) {
	if (check[hated]) {
		answer = -1;
		return;
	}

	check[hated] = 1;
	if (tv[hated] != 0) {
		answer++;
		dfs(tv[hated]);
	}
}

int main() {
	int n, m, p;
	cin >> n >> m >> p;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (tv[b] == 0) tv[b] = a;
	}

	dfs(p);
	cout << answer << '\n';

	return 0;
}