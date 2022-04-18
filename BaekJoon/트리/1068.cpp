#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> tree;

int root, d;

int dfs(int current) {
	int temp = 1;
	int child = 0;

	for (const auto& next : tree[current]) {
		if (next == d) continue;
		child += dfs(next); //...child를 가산 (연결 수 많큼)
	}

	if (child) 
		return child;
	else 
		return temp;
}

int main(){
	int n; cin >> n;
	tree.resize(n);

	for (int i = 0; i < n; ++i) {
		int parent;
		cin >> parent;
		if (parent == -1) root = i;
		else tree[parent].push_back(i);
	}

	cin >> d;
	if (root != d)
		cout << dfs(root) << '\n';
	else cout << 0 << '\n';

	return 0;
}