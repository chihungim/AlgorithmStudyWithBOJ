#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int c = 0;
	cin >> c;
	cout.precision(3);
	
	for(int i = 0; i<c; i++)
	{
		vector<double> scores;
		int n = 0, cnt = 0;
		double avg = 0, sum = 0;
		cin >> n;
		for(int j = 0; j<n; j++)
		{
			double input = 0;
			cin >> input;
			scores.push_back(input);
			sum += input;
		}

		avg = sum / n;

		for (auto s : scores)
			if (avg < s)
				cnt++;
		
		cout << fixed  << (static_cast<double>(cnt)/n)*100  <<"%"<< "\n";
	}
	return 0;
}