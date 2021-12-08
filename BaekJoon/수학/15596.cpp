#include <iostream>
#include <vector>


using namespace std;

long long sum(vector<int>& a) {
	long long ans = 0;
	for (auto v : a)
	{
		ans += v;
	}
	return ans;
}
int main()
{
	int n = 0;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);


	std::cout << sum(nums);

	return 0;
}