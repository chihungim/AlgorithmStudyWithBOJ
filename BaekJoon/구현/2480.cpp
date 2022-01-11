#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> rates(7);
	int max = 0;
	for(int i = 0; i< 3; i++)
	{
		int input; cin >> input;
		max = input > max ? input : max;
		rates[input]++;
	}
	int r = *max_element(rates.begin(), rates.end());
	int v = max_element(rates.begin(), rates.end()) - rates.begin();
	
	std::cout << (r == 3 ? 10000 + (v * 1000) : r == 2 ? 1000 + (v * 100) : max * 100);

	return 0;
}
