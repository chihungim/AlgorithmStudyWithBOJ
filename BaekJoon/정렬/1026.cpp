#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char* argv[])
{
	int n = 0, s = 0;

	std::cin >> n;
	
	std::vector<int> v1(n);
	std::vector<int> v2(n);

	for(auto &v : v1)
		std::cin >> v;

	for (auto& v : v2)
		std::cin >> v;

	std::sort(v1.begin(), v1.end());
	std::sort(v2.begin(), v2.end());

	if (*std::max_element(v1.begin(), v1.end()) > *std::max_element(v2.begin(), v2.end()))
		std::reverse(v1.begin(), v1.end());
	else
		std::reverse(v2.begin(), v2.end());

	for(int i = 0; i<n; i++)
	{
		s += v1[i] * v2[i];
	}

	std::cout << s;
	
}
