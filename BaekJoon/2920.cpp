#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main(int argc, char* argv[])
{
	array<int, 8> arr;
	for (auto& a : arr)
		cin >> a;


	if (is_sorted(arr.begin(), arr.end(), greater<int>()))
		cout << "descending" << '\n';
	else if (is_sorted(arr.begin(), arr.end()))
		cout << "ascending" << '\n';
	else
		cout << "mixed" << "\n";
}
