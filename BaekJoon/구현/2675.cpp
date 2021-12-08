#include <iostream>
#include <string>

using namespace std;

int main()
{
	string output;
	int t;
	cin >> t;
	for(int i = 0; i<t; i++)
	{
		output.clear();
		int r;
		string input;
		cin >> r >> input;
		for(auto ch : input)
		{
			for(int i = 0; i<r; i++)
			{
				output.push_back(ch);
			}
		}

		cout << output << "\n";
	}
}