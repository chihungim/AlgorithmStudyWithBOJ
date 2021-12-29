#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> containers(6);
	for (auto &container : containers)
	{
		cin >> container;
		container *= 5;
	}
	
	std::cout << accumulate(containers.begin(), containers.end(),0);
}
