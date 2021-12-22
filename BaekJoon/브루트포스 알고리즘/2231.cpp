#include <iostream>
#include <string>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	int n, min = 0;
	cin >> n;

	for(int i = n; i>=0; i--)
	{
		string str = to_string(i);
		int sum = stoi(str);
		for(int i = 0; i<str.size(); i++)
		{
			sum += str[i] - '0';
			if (sum == n)
				min = stoi(str);
		}
	}

	cout << min << '\n';
}
