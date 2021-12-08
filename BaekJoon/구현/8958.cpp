#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> results;
	vector<int> sums;
	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		results.push_back(input);

		int cnt = 0, sum = 0;//

		for (int j = 0; j < input.length(); j++)
		{
			if (input.operator[](j) == 'O')
			{
				cnt++;
			}
			else
			{
				cnt = 0;
			}
			sum += cnt;
		}
		sums.push_back(sum);
	}

	for(auto sum : sums)
	{
		cout << sum << "\n";
	}
	
	return 0;
}