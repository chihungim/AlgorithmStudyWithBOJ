#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char* argv[])
{

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	

	int n, m;
	cin >> n >> m;
	vector<int> A(n);
	vector<int> B(m);
	for (auto& a : A)
		cin >> a;
	for (auto& b : B)
		cin >> b;

	vector<int> R(n + m);
	merge(A.begin(), A.end(),
		B.begin(), B.end(),
		R.begin());

	for (const auto& r : R)
		cout << r << ' ';
}
