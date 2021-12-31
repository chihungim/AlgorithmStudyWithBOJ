#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& v : a)
		cin >> v;
	vector<int> answer(n);
	stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= a[i]) 
            s.pop();
        answer[i] = s.empty() ? -1 : s.top();
        s.push(a[i]);
    }

	for (auto& ans : answer)
		cout << ans << " ";

	return 0;
}
