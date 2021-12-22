#include <iostream>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);

	priority_queue<int, vector<int>, greater<int>> pq;

	long long n;
	cin >> n;
	vector<int> v(n);


	for (auto& val : v)
		cin >> val;

	sort(v.begin(), v.end());


	for(int i = 0; i<v.size(); i++)
	{
		for(int j= 0; j<v.size(); j++)
			pq.push(stoi(to_string(v[i]) + to_string(v[j])));
		if (pq.size() == 3) break;
	}
	
	while (!pq.empty())
	{
		cout << pq.top() << "\n";
		pq.pop();
	}
}
