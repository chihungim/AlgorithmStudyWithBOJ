#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	string input, result = "~";
	cin >> input;

	for(int i = 0; i<input.length()-2; i++)
	{
		for(int j = i + 1; j<input.size()-1; j++)
		{
			string temp;
			for (int u = i; u >= 0; u--)
				temp += input[u];

			for (int u = j; u > i; u--)
				temp += input[u];

			for (int u = input.size() - 1; u > j; u--)
				temp += input[u];
			if (result > temp) result = temp;
		}
	}

	cout << result << "\n";

	return 0;
}
