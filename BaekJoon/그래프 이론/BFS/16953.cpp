#include <iostream>
#include <queue>
#include <string>

using ll = long long;

using namespace std;

ll bfs(ll a, ll b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	ll a, b;
	cin >> a >> b;
	cout << bfs(a, b);
}

ll bfs(ll a, ll b) {
	queue<pair<ll, ll>> q;
	q.push({ a,1 });
	ll cnt = 1;

	while (!q.empty()) {
		const auto& current = q.front().first; 
		const auto& depth = q.front().second; q.pop();

		if (current > b) continue;
		if (current == b) return depth;
		
		q.push({ current * 2, depth + 1 });
		q.push({ (current*10)+1, depth + 1 });
	}

	return -1;
}
