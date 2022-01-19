#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(char a, char b)
{
	if (a > b)
		return true;
	return false;

}

int main(void)
{
	string n;
	cin >> n;

	long long sum = 0;
	bool isZero = false;

	for (int i = 0; i < n.size(); i++)
	{
		sum += (n[i] - '0');
		if (!(n[i] - '0'))
			isZero = true;
	}

	if (sum % 3 || !isZero)
		cout << -1 << "\n";
	else
	{
		sort(n.begin(), n.end(), cmp);
		cout << n << "\n";
	}
	return 0;
}



