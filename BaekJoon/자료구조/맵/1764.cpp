#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> µË(n);
	vector<string> ∫∏(m);
	vector<string> µË∫∏¿‚(n + m);
	vector<string>::iterator itr;
	
	for (auto& §ß : µË)
		cin >> §ß;

	for (auto& §≤ : ∫∏)
		cin >> §≤;

	sort(µË.begin(), µË.end());
	sort(∫∏.begin(), ∫∏.end());

	itr = set_intersection(µË.begin(), µË.end(), ∫∏.begin(), ∫∏.end(), µË∫∏¿‚.begin());
	µË∫∏¿‚.resize(itr - µË∫∏¿‚.begin());

	cout << µË∫∏¿‚.size() << "\n";
	for(auto& µË∫∏ : µË∫∏¿‚)
	{
		cout << µË∫∏ << "\n";
	}

	return 0;
}