#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


vector<int> add(string &a, string &b)
{
	vector<int> sum;
	int next_digit = 0;
	if (a.length() < b.length())
		swap(a, b);
	
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	while (a.size() != b.size())
		b.push_back('0');
	
	
	for (int i = 0; i < b.length(); i++)
	{
		const int num1 = a[i] - 48, num2 = b[i] - 48;
		sum.push_back((num1 + num2 + next_digit) % 10);
		next_digit = (num1 + num2 + next_digit) / 10;
	}

	if(next_digit != 0)
		sum.push_back(next_digit);
	
	reverse(sum.begin(), sum.end());
	return sum;
}

int main()
{
	string a, b;

	cin >> a >> b;

	for (auto digit : add(a, b))
	{
		cout << digit;
	}
}
