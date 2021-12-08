#include <iostream>
#include <algorithm>
#include <vector>


int compare(int *v1, int *v2)
{
	return *v1 < *v2;
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v(n);

	for(auto &val:v)
		std::cin >> val;
	
	std::sort(v.begin(), v.end(), [](int a, int b)
	{
			return a < b;
	});

	for (auto value : v)
	{
		std::cout << value << "\n";
	}
	
	
}