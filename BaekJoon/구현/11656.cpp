#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string str; cin >> str;
	vector<string> ans;
	for (int i = 0; i < str.size(); i++)
	{
		ans.push_back(str.substr(i, str.length()));
	}

	sort(ans.begin(), ans.end());

	for (const auto& a : ans)
		cout << a << "\n";

	return 0;
}
