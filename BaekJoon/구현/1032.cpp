#include <string>
#include <iostream>

using namespace std;

int main()
{
	string pattern;
	int n = 0;
	cin >> n;
	
	for(int i = 0 ;i<n; i++)
	{
		string input;
		cin >> input;
		if (i == 0)
			pattern = input;
		else
			for(int j = 0; j<input.size(); j++)
				if (pattern[j] != input[j])
					pattern[j] = '?';				
	}
	cout << pattern;
}